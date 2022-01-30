#! /bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/../../definition.sh

function BidirectionalArithmetic()
{
	echo -e $BWhite $1 $Color_Off
	echo
	echo -e $BBlue "Namespace FT" $Color_Off
	echo
	Execute $ft $2
	echo
	echo -e $BBlue "Namespace STD" $Color_Off
	echo
	Execute $std $2
	echo
	CompareFiles
	PrintBidirectionalArithmeticMenu
}

function BidirectionalAllArithmetic()
{
	echo -e $BWhite "Test Bidirectional Increment" $Color_Off
	Execute $ft "23311"
	Execute $std "23311"
	echo
	CompareFiles
	echo -e $BWhite "Test Bidirectional Decrement" $Color_Off
	Execute $ft "23321"
	Execute $std "23321"
	echo
	CompareFiles
	if [[ $1 == '1' ]]
	then
		PrintBidirectionalArithmeticMenu
	fi
}

function PrintBidirectionalArithmeticMenu()
{
	echo -e $BPurple --- Bidirectional Constructor menu --- $Color_Off
	echo -e $BCyan 1 $BWhite - Incrementation $Color_Off
	echo -e $BCyan 2 $BWhite - Decremention $Color_Off
	echo -e $BGreen A $BWhite - All $Color_Off
	echo -e $BYellow B $BWhite - Back $Color_Off
	echo -e $BRed E $BWhite - Exit $Color_Off
	echo -ne $BBlue Enter your choice : $Color_Off
}

function BidirectionalArithmeticMenu()
{
	clear
	PrintBidirectionalArithmeticMenu
	while read input
	do
		clear
		if [[ $input == "1" ]]
		then
		 BidirectionalArithmetic "Test Bidirectional Incrementation" "23310"
		elif [[ $input == "2" ]]
		then
		 BidirectionalArithmetic "Test Bidirectional Decremention" "23320"
		elif [[ $input == "A" || $input == "a" ]]
		then
		 BidirectionalAllArithmetic '1'
		elif [[ $input == "B" || $input == "b" ]]
		then
		 BidirectionalMenu
		elif [[ $input == "E" || $input == "e" ]]
		then
			exit
		else
			echo -e $BRed Command not found! $Color_Off
			echo
		PrintBidirectionalArithmeticMenu
		fi
	done
}
