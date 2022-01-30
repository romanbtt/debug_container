#! /bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/../../definition.sh

function BidirectionalElementAccess()
{
	echo -e $BWhite "Tests Bidirectional Element Access" $Color_Off
	echo
	echo -e $BBlue "Namespace FT" $Color_Off
	echo
	Execute $ft "23210"
	echo
	echo -e $BBlue "Namespace STD" $Color_Off
	echo
	Execute $std "23210"
	echo
	CompareFiles
	PrintBidirectionalMenu
}