#!/bin/sh

[ $# -eq 0 ] && echo "Usage $0 src_file_path+" && exit 1

for src_file_path in $@
do
    src_file_dir=`dirname $src_file_path`
    src_file_name=`basename $src_file_path`
    src_file_name_no_ext=`echo $src_file_name | sed 's/\.c//'`
    template='script/test.template.c'

    test_file_path="test/$src_file_dir/test_$src_file_name"

    [ -f $test_file_path ] &&
        echo "Cannot create test $test_file_path already exists" &&
        continue

    mkdir -p "test/$src_file_dir"
    sed "s/<funcname>/$src_file_name_no_ext/" $template > $test_file_path
    echo "Created new test file at $test_file_path"
done

