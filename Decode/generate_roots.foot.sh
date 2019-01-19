#!/bin/bash

DATADIR=/media/gigi/MaxtorGigi/FOOTDEC18

./Decode 1544818479 -c --shighthreshold 40 --slowthreshold 40 --khighthreshold 40 --klowthreshold 40 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544818479.root ${DATADIR}/RootData/run_1544818479_12.root
mv ${DATADIR}/RootData/run_1544818479.root.pdf ${DATADIR}/RootData/run_1544818479_12.root.pdf

./Decode 1544821979 -c --shighthreshold 40 --slowthreshold 40 --khighthreshold 40 --klowthreshold 40 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544821979.root ${DATADIR}/RootData/run_1544821979_12.root
mv ${DATADIR}/RootData/run_1544821979.root.pdf ${DATADIR}/RootData/run_1544821979_12.root.pdf

./Decode 1544823209 -c --shighthreshold 80 --slowthreshold 80 --khighthreshold 80 --klowthreshold 80 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544823209.root ${DATADIR}/RootData/run_1544823209_12.root
mv ${DATADIR}/RootData/run_1544823209.root.pdf ${DATADIR}/RootData/run_1544823209_12.root.pdf

./Decode 1544818921 -c --shighthreshold 80 --slowthreshold 80 --khighthreshold 80 --klowthreshold 80 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544818921.root ${DATADIR}/RootData/run_1544818921_12.root
mv ${DATADIR}/RootData/run_1544818921.root.pdf ${DATADIR}/RootData/run_1544818921_12.root.pdf

./Decode 1544819626 -c --shighthreshold 80 --slowthreshold 80 --khighthreshold 80 --klowthreshold 80 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544819626.root ${DATADIR}/RootData/run_1544819626_12.root
mv ${DATADIR}/RootData/run_1544819626.root.pdf ${DATADIR}/RootData/run_1544819626_12.root.pdf

./Decode 1544820767 -c --shighthreshold 80 --slowthreshold 80 --khighthreshold 80 --klowthreshold 80 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544820767.root ${DATADIR}/RootData/run_1544820767_12.root
mv ${DATADIR}/RootData/run_1544820767.root.pdf ${DATADIR}/RootData/run_1544820767_12.root.pdf

#####################

./Decode 1544818479 -c --shighthreshold 30 --slowthreshold 30 --khighthreshold 30 --klowthreshold 30 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544818479.root ${DATADIR}/RootData/run_1544818479_16.root
mv ${DATADIR}/RootData/run_1544818479.root.pdf ${DATADIR}/RootData/run_1544818479_16.root.pdf

./Decode 1544821979 -c --shighthreshold 30 --slowthreshold 30 --khighthreshold 40 --klowthreshold 40 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544821979.root ${DATADIR}/RootData/run_1544821979_16.root
mv ${DATADIR}/RootData/run_1544821979.root.pdf ${DATADIR}/RootData/run_1544821979_16.root.pdf

./Decode 1544823209 -c --shighthreshold 40 --slowthreshold 40 --khighthreshold 40 --klowthreshold 40 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544823209.root ${DATADIR}/RootData/run_1544823209_16.root
mv ${DATADIR}/RootData/run_1544823209.root.pdf ${DATADIR}/RootData/run_1544823209_16.root.pdf

./Decode 1544818921 -c --shighthreshold 30 --slowthreshold 30 --khighthreshold 40 --klowthreshold 40 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544818921.root ${DATADIR}/RootData/run_1544818921_16.root
mv ${DATADIR}/RootData/run_1544818921.root.pdf ${DATADIR}/RootData/run_1544818921_16.root.pdf

./Decode 1544819626 -c --shighthreshold 30 --slowthreshold 30 --khighthreshold 80 --klowthreshold 80 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544819626.root ${DATADIR}/RootData/run_1544819626_16.root
mv ${DATADIR}/RootData/run_1544819626.root.pdf ${DATADIR}/RootData/run_1544819626_16.root.pdf

./Decode 1544820767 -c --shighthreshold 30 --slowthreshold 30 --khighthreshold 80 --klowthreshold 80 --rootdata ${DATADIR}/RootData/ --rawdata ${DATADIR}/RawData --caldata ${DATADIR}/CalData/
mv ${DATADIR}/RootData/run_1544820767.root ${DATADIR}/RootData/run_1544820767_16.root
mv ${DATADIR}/RootData/run_1544820767.root.pdf ${DATADIR}/RootData/run_1544820767_16.root.pdf


cd ../Analysis/

./AnalysisFOOT 228MeV_12.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544818479_12.root ${DATADIR}/RootData/run_1544821979_12.root
./AnalysisFOOT 100MeV_12.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544823209_12.root
./AnalysisFOOT 80MeV_12.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544818921_12.root ${DATADIR}/RootData/run_1544819626_12.root ${DATADIR}/RootData/run_1544820767_12.root

./AnalysisFOOT 228MeV_16.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544818479_16.root ${DATADIR}/RootData/run_1544821979_16.root
./AnalysisFOOT 100MeV_16.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544823209_16.root
./AnalysisFOOT 80MeV_16.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544818921_16.root ${DATADIR}/RootData/run_1544819626_16.root ${DATADIR}/RootData/run_1544820767_16.root
