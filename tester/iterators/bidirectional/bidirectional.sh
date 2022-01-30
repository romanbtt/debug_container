#! /bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/constructors.sh
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/element_access.sh
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/arithmetic.sh
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/relational_operators.sh

function BidirectionalAll()
{
	echo -e $BBlue "Tests Bidirectional Constructors" $Color_Off
	echo
	BidirectionalAllConstructors '0'

	echo -e $BBlue "Tests Bidirectional Element Access" $Color_Off
	echo
	
	echo -e $BWhite "Test Bidirectional Element Access" $Color_Off
	Execute $ft "23211"
	Execute $std "23211"
	echo
	CompareFiles
	
	echo -e $BBlue "Tests Bidirectional Arithmetic" $Color_Off
	echo
	BidirectionalAllArithmetic '0'

	echo -e $BBlue "Tests Bidirectional Relational Operators" $Color_Off
	echo

	echo -e $BWhite "Test Bidirectional Relational Operators" $Color_Off
	Execute $ft "23411"
	Execute $std "23411"
	echo
	CompareFiles

	if [[ $1 == '1' ]]
	then
		PrintBidirectionalMenu
	fi
}

function PrintBidirectionalMenu()
{
	echo -e $BPurple --- Bidirectional Menu --- $Color_Off
	echo -e $BCyan 1 $BWhite - Constructors $Color_Off
	echo -e $BCyan 2 $BWhite - Element access $Color_Off
	echo -e $BCyan 3 $BWhite - Arithmetic $Color_Off
	echo -e $BCyan 4 $BWhite - Relational operators $Color_Off
	echo -e $BGreen A $BWhite - All $Color_Off
	echo -e $BYellow B $BWhite - Back $Color_Off
	echo -e $BRed E $BWhite - Exit $Color_Off
	echo -ne $BBlue Enter your choice : $Color_Off
}

function BidirectionalMenu()
{
	clear
	PrintBidirectionalMenu
	input=""
	while read input
	do
		clear
		if [[ $input == "1" ]]
		then
			BidirectionalConstructorsMenu
		elif [[ $input == "2" ]]
		then
			BidirectionalElementAccess "Test Element access"
		elif [[ $input == "3" ]]
		then
			BidirectionalArithmeticMenu
		elif [[ $input == "4" ]]
		then
			BidirectionalRelationalOperators "Test Relational operators"
		elif [[ $input == "A" || $input == "a" ]]
		then
			BidirectionalAll '1'
		elif [[ $input == "B" || $input == "b" ]]
		then
			IteratorsMenu
		elif [[ $input == "E" || $input == "e" ]]
		then
			exit
		else
			echo -e $BRed Command not found! $Color_Off
			echo
			PrintBidirectionalMenu
		fi
	done
}