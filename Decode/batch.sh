#!/bin/bash

DATADIR=../

#-------------------------------------------------------------------------------------

    ls -lrt ${DATADIR}/RawData/GoodTrigger | grep dat | awk '{ print $9}' > FILELIST.txt
    
    for i in $(cat FILELIST.txt);
    do
	DECODE_ARG="${i:0:10} "
	if [[ $i == *ANC* ]]; then
	    ARG2=${i#*ANC_*};	  
	    ARG2=${ARG2%*.*};
	    DECODE_ARG+=" $ARG2 "
	fi
	COMMAND=" ./Decode $DECODE_ARG -c --shighthreshold 4.5 --slowthreshold 2.5 --khighthreshold 4.5 --klowthreshold 2.5 --rootdata ${DATADIR}/RootData/GoodTrigger --rawdata ${DATADIR}/RawData/GoodTrigger --caldata ${DATADIR}/CalDataCorr/ "
	echo $COMMAND 
	$COMMAND 
    done
