#!/bin/bash

echo    "Installing dependencies..."

read -p "This script will install the necessary dependencies for the project. Do you want to continue? (y/n) " answer

if [[ "$answer" != "y" ]]; then
    echo "Installation aborted."
    exit 0
fi
sudo apt-get update
sudo apt-get install -y build-essential cmake


echo    "Dependencies installed successfully."