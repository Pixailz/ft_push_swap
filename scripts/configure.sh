#!/bin/sh

# config

##Bash Color
green='\e[32m'
red='\e[31m'
yellow='\e[33m'
blue='\e[34m'
lgreen='\e[92m'
lyellow='\e[93m'
lblue='\e[94m'
lmagenta='\e[95m'
lcyan='\e[96m'
blink_red='\033[05;31m'
restore='\033[0m'
reset='\e[0m'

PAR_DIR=$(realpath $(pwd)/..)

###

# utils

warning() {
	printf "${lyellow}[ WARNING ]${reset} $*${reset}\n"
}

usage() {
	printf "Usage : ${0} [-hI]\n"
	printf "configure blank project. first launch with no args to setup\n"
	printf "\t-h : show this help\n"
	printf "\t-I : Rearrange all include\n"
	exit
}

###

# parsing

while [ "$1" != "" ]; do
	case $1 in
		-I)
			INCLUDE_ALL_ARRANGE=true
			;;
		-U)
			UPDATE_ALL=true
			;;
		-h)
			usage
			;;
		*)
			echo "Wrong args"
			usage
			;;
	esac
	shift
done

main() {
	read
}
