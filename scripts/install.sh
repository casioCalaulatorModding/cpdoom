#!/usr/bin/env bash

echo "Installing tool chain..."

echo "Checking if for apt, curl and other"
echo "this script will download the required tool if you dont have them"

mkdir toolchain
if ! command -v apt &> /dev/null
then
    echo "apt could not be found this could be you are not using a ubunto based systeam please use an ubuntu based systeam or install tools manuly and skip this script"
    exit 1
fi

if ! command -v wget &> /dev/null
then
    echo "wget could not be found"
    sudo apt install wget
fi
if ! command -v make &> /dev/null
then
    echo "make could not be found"
    sudo apt install build-essential
fi
if ! command -v git &> /dev/null
then
    echo "git could not be found"
    sudo apt install git
fi


echo installing sh4-tools for this project
wget https://github.com/luke-e-gibson/sh4-tools/releases/download/sh4-tools/sh4-tools-linux.zip -P temp
unzip temp/sh4-tools-linux.zip -d ./toolchain/sh4-tools