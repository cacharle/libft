#!bin/sh

if [ $# -ne 1 ]; then
	echo "Usage $0 ignore_file"
	exit 1
fi

IGNORE_FILE=$1

if [ ! -e $IGNORE_FILE ]; then
	echo "Ignore file doesnt exist"
	exit 1
fi

SRC_DIR=src

IGNORE_FIND_ARGS=`sed 's/.*/-not -path "&"/' $IGNORE_FILE | paste -sd " " -`

sh -c "find $SRC_DIR $IGNORE_FIND_ARGS -name \"*.c\""
# find $SRC_DIR $IGNORE_FIND_ARGS -name "*.c"
