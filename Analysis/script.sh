#!/bin/bash

DATADIR=$(pwd)

#-------------------------------------------------------------------------------------

    ls -lrt --ignore="*.pdf" ${DATADIR}/RootData/ | grep root | awk '{ print $9}' > FILELIST.txt
    
    rm -rf commands.txt

    for i in $(cat FILELIST.txt); do
	    COMMAND="./AnalysisFOOT /home/centos/NASPG/BTData/Mar2019_FOOT_data/Results/0_$i 0 RootData/$i"
	    echo $COMMAND >> commands.txt
    done

    rm FILELIST.txt

    parallel --jobs 10 --timeout 101% < commands.txt
