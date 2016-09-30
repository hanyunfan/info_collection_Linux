#!/bin/bash
#set -x

# Script created by Frank Han,
# Date: 9/26/2016
# For retrieve remote Linux system info.
#
# Usage ./info ssh_ip_address ssh_user ssh_password ipmi_ip ipmi_user ipmi_password
#

#Preparaion on local machine

##Install sshpass and other tools

DISTR=`cat /etc/*release | grep DISTRIB_ID |cut -d'=' -f2`
if [ $DISTR='Ubuntu' ]
then 
   apt-get install -y sshpass openssh-client ipmitool >/dev/null
else
   yum install -y sshpass openssh-clients ipmitool >/dev/null
fi

##Assemble command#1 for ssh
IP=$1
SSHUSER=$2
SSHPW=$3
SSH="sshpass -p $SSHPW ssh $SSHUSER@$IP" 

##Assemble command#2 for IPMI
IPMIIP=$4
IPMIUSER=$5
IPMIPW=$6
IPMI="ipmitool -I lanplus -H $IPMIIP -U $IPMIUSER -P $IPMIPW"

##IP validation function
function validate_IP() {
if [ `echo $1 | grep -o '\.' | wc -l` -ne 3 ]; then
   echo "Parameter '$1' does not look like an IP Address (does not contain 3 dots).";
   exit 1;
elif [ `echo $1 | tr '.' ' ' | wc -w` -ne 4 ]; then
   echo "Parameter '$1' does not look like an IP Address (does not contain 4 octets).";
   exit 1;
else
   for OCTET in `echo $1 | tr '.' ' '`; do
      if ! [[ $OCTET =~ ^[0-9]+$ ]]; then
         echo "Parameter '$1' does not look like in IP Address (octet '$OCTET' is not numeric).";
         exit 1;
      elif [[ $OCTET -lt 0 || $OCTET -gt 255 ]]; then
         echo "Parameter '$1' does not look like in IP Address (octet '$OCTET' is not in range 0-255).";
         exit 1;
      fi
   done
fi
#echo "Parameter '$1' is a valid IP Address.";
return 0;
}

#Check if inputs has all 6 parameters
if [ "$#" -eq 6 ] 
then
   #Check if 1st one is IP address; if not exist.
   if validate_IP $IP
   then
      #Test connnection with ssh username and password
      $SSH uptime &>/dev/null
      if [ "$?" != 0 ]; then printf "Cannot connect to remote server by SSH"; exit 1; fi 
   else
      printf "SSH login unsuccessful"
   fi
   if validate_IP $IPMIIP
   then
      #Test IPMI connection
      $IPMI chassis selftest &>/dev/null
      if [ "$?" != 0 ]; then printf "Cannot connect to remote server by IPMI"; exit 1; fi
   else
      printf "IPMI login unsuccessful"
   fi
else
   printf "Usage: ./info ssh_ip_address ssh_user ssh_password ipmi_ip ipmi_user ipmi_password"; exit 1;
fi

#script running time
date

#check() is nothing but a wrapper
check_info(){
#check_info Type Linux_cmd
printf "\n$1\n"
$SSH "echo $SSHPW | sudo -S $2"
return 0
}

#CPU
check_info CPU "dmidecode -t 4 | egrep 'Manufacturer:|Family:|Version|Count'" 

#Memory
$SSH 'cat /proc/meminfo | grep MemTotal'
##locations (need sudo rights)
check_info Memory "dmidecode -t memory| egrep 'Locator|Size|Serial Number'"

#HDD/SSD
check_info "Local disks" "cat /proc/scsi/scsi | grep -v Virtual | grep -B 1 Model"

#RAID controller
##Model
##disk status throught RAID controller may need to have RAID tools installed.

#Motherboard
check_info Motherboard "dmidecode -t baseboard| egrep 'Manufacturer|Product|Serial'"

#BIOS
check_info BIOS "dmidecode -t bios| egrep 'Version|Release|Revision'"

#OS Disturbutuion
check_info "OS info" "uname -a"

#FileSystem
##Type

#Network Cards
#Part of PCIe output
#MAC
check_info MAC "ifconfig | grep HWaddr"

#PCIe slots
check_info PCIe "dmidecode -t slot| egrep 'Designation|Current|Bus'"

#Fans
$IPMI sdr type "Fan" |cut -d'|' -f1,3

#PSU
$IPMI sdr type "Power Supply"

#USB device
check_info USB "cat /sys/kernel/debug/usb/devices |egrep '^S:'"

#reserved for func of formating the outputs

exit 0
