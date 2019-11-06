#!/bin/bash

if [ $# -eq 0 ]
then
    echo "run with ./compressPkg.sh teamname"
    exit 0
fi

pkgName=$1

if [ -d "$pkgName" ]
then
    zip -r ${pkgName}.zip $pkgName
    echo "compress package success!"
else
    echo "$pkgName not exist!"
fi