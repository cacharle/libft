#!bin/sh

SRC=`sh script/find_src.sh .libftignore`

sed 's:\#INSERTSRC:'$SRC':g' template.makefile > rendu.makefile
