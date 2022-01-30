#! /bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/../../definition.sh

function VectorGetAllocator()
{
	echo -e $BWhite "Test Get allocator" $Color_Off
	echo
	echo -e $BBlue "Namespace FT" $Color_Off
	echo
	Execute $ft "11610"
	echo
	echo -e $BBlue "Namespace STD" $Color_Off
	echo
	Execute $std "11610"
	echo
	CompareFiles
	PrintVectorMenu
}