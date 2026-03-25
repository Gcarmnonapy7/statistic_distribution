#!/bin/bash

BRANCH_NAME=$1
COMMIT_MESSAGE=$2


if [ -z "$COMMIT_MESSAGE" ] || [ -z "$BRANCH_NAME" ]; then
    echo "Usage: $0 <commit_message> <branch_name>"
    exit 1
fi

echo "Pushing changes to branch '$BRANCH_NAME' with commit message '$COMMIT_MESSAGE'..."
git checkout $BRANCH_NAME

echo "Adding changes to the branch '$BRANCH_NAME'..."
git add .

echo "Commiting changes to the branch '$BRANCH_NAME'..."
git commit -m "$COMMIT_MESSAGE"

echo "Pushing changes to the remote repository..."
git push origin $BRANCH_NAME

echo "Changes pushed successfully to branch '$BRANCH_NAME'. Have a great day! \n"
echo "If you need to delete locally the branch '$BRANCH_NAME', you can use the following command: git branch -d $BRANCH_NAME"



