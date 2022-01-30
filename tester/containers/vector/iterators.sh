#! /bin/bash
DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )
source $DIR/../../definition.sh

function VectorIterator()
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
	PrintVectorIteratorsMenu
}

function VectorAllIterators()
{
	echo -e $BWhite "Test Vector Begin" $Color_Off
	Execute $ft "11211"
	Execute $std "11211"
	echo
	CompareFiles
	echo -e $BWhite "Test Vector End" $Color_Off
	Execute $ft "11221"
	Execute $std "11221"
	echo
	CompareFiles
	echo -e $BWhite "Test Vector Rbegin" $Color_Off
	Execute $ft "11231"
	Execute $std "11231"
	echo
	CompareFiles
	echo -e $BWhite "Test Vector Rend" $Color_Off
	Execute $ft "11231"
	Execute $std "11231"
	echo
	CompareFiles
	if [[ $1 == '1' ]]
	then
		PrintVectorIteratorsMenu
	fi
}

function PrintVectorIteratorsMenu()
{
	echo -e $BPurple --- Vector Iterators menu --- $Color_Off
	echo -e $BCyan 1 $BWhite - Begin $Color_Off
	echo -e $BCyan 2 $BWhite - End $Color_Off
	echo -e $BCyan 3 $BWhite - Rbegin $Color_Off
	echo -e $BCyan 4 $BWhite - Rend $Color_Off
	echo -e $BGreen A $BWhite - All $Color_Off
	echo -e $BYellow B $BWhite - Back $Color_Off
	echo -e $BRed E $BWhite - Exit $Color_Off
	echo -ne $BBlue Enter your choice : $Color_Off
}

function VectorIteratorsMenu()
{
	clear
	PrintVectorIteratorsMenu
	while read input
	do
		clear
		if [[ $input == "1" ]]
		then
			VectorIterator "Test Vector Begin" "11210"
		elif [[ $input == "2" ]]
		then
			VectorIterator "Test Vector End" "11220"
		elif [[ $input == "3" ]]
		then
			VectorIterator "Test Vector Rbegin" "11230"
		elif [[ $input == "4" ]]
		then
			VectorIterator "Test Vector Rend" "11240"
		elif [[ $input == "A" || $input == "a" ]]
		then
			VectorAllIterators '1'
		elif [[ $input == "B" || $input == "b" ]]
		then
			VectorMenu
		elif [[ $input == "E" || $input == "e" ]]
		then
			exit
		else
			echo -e $BRed Command not found! $Color_Off
			echo
		PrintVectorIteratorsMenu
		fi
	done
}