#!/bin/sh

for f in $@
do
	test_name="test_`basename $f | sed 's/\..*//'`"
	

	echo $test_name
done
