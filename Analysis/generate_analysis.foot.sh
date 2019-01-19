#!/bin/bash

DATADIR=/media/gigi/MaxtorGigi/FOOTDEC18

./AnalysisFOOT 228MeV_12.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544818479.root ${DATADIR}/RootData/run_1544821979.root
./AnalysisFOOT 100MeV_12.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544823209.root
./AnalysisFOOT 80MeV_12.root 12 0 0 0 1024 ${DATADIR}/RootData/run_1544818921.root ${DATADIR}/RootData/run_1544819626.root ${DATADIR}/RootData/run_1544820767.root

./AnalysisFOOT 228MeV_16.root 16 0 0 0 1024 ${DATADIR}/RootData/run_1544818479.root ${DATADIR}/RootData/run_1544821979.root
./AnalysisFOOT 100MeV_16.root 16 0 0 0 1024 ${DATADIR}/RootData/run_1544823209.root
./AnalysisFOOT 80MeV_16.root 16 0 0 0 1024 ${DATADIR}/RootData/run_1544818921.root ${DATADIR}/RootData/run_1544819626.root ${DATADIR}/RootData/run_1544820767.root
