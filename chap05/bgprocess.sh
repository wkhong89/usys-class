#!/bin/bash
if [ $# -eq 0 ] || [ $# -gt 2 ] 
then
	echo "USAGE: ./bgprocess.sh [#repeats] [period(sec)]"
	exit 1
elif [ $# -eq 1 ]
then
	REPEAT=$1
	PERIOD=1
elif [ $# -eq 2 ]
then
	REPEAT=$1
	PERIOD=$2 
fi

let cnt=0
while [ $cnt -lt $REPEAT ]
do
	echo "$cnt repeat"
	sleep $PERIOD
	let cnt+=1
done
