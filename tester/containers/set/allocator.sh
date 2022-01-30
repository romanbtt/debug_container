#! /bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/../../definition.sh

function SetGetAllocator()
{
	echo -e $BWhite "Test Set Get allocator" $Color_Off
	echo
	echo -e $BBlue "Namespace FT" $Color_Off
	echo
	Execute $ft "14710"
	echo
	echo -e $BBlue "Namespace STD" $Color_Off
	echo
	Execute $std "14710"
	echo
	CompareFiles
	PrintSetMenu
}