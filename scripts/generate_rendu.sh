#!/bin/sh

if [ "$(git status --porcelain)" ]
then
	echo "Error: Your working directory isn't clean"
	exit
fi

BASE_BRANCH_NAME=$(git rev-parse --abbrev-ref HEAD)
RENDU_BRANCH_NAME="rendu-$BASE_BRANCH_NAME"

if [ -z $(git show-ref --verify --quiet refs/heads/$RENDU_BRANCH_NAME) ]
then
	echo "Error: $RENDU_BRANCH_NAME was already generated"
	exit
fi

git checkout -b $RENDU_BRANCH_NAME
RENDU_IGNORE=$(sed -n 's/RENDU_IGNORE=//p')
make fclean
rm -f $RENDU_IGNORE

# generate makefile strict src

git add .
git commit --message "Generated commit: creation of rendu for $BASE_BRANCH_NAME"
