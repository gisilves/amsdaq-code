CXX := `root-config --cxx`
ROOTCLING=rootcling
MARCH := `root-config --arch`
LD:=$(CXX)

OBJ=./obj/
SRC=./src/
INC=./include/

#CFLAGS:= -g -Wno-deprecated
CFLAGS:= -O3 -Wno-deprecated

VERSION      := $(shell root-config --version | cut -b1-4)
ifeq ($(VERSION),5.27)
VERSIONP=
else
VERSIONP = $(VERSION)
endif

UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
ADDLDFLAGS = -Wl,--no-as-needed
endif
ifeq ($(UNAME), Darwin)
ADDLDFLAGS =
endif

#CFLAGS += $(shell root-config --auxcflags) -std=c++11 -fPIC
CFLAGS += $(shell root-config --auxcflags) -fPIC

ROOTDYNAMICLIBS := $(shell root-config --libs) -lMinuit -lSpectrum
ROOTVIEWERLIBS := $(shell root-config --cflags --glibs)
ROOTINC := $(shell root-config --incdir)

DECODE = ../Decode/
DECODELIBS = -Wl,-rpath,$(DECODE) -L$(DECODE) -lEvent

COMMON = ../CommonTool/

INCLUDES=-I./ -I$(ROOTINC) -isystem$(ROOTINC) -I$(DECODE) -isystem$(DECODE) -I$(COMMON)

.PHONY: ViewerGUI

default: Analysis

Viewer: ./obj/viewer.o
	$(CXX) $(CFLAGS) $< $(ADDLDFLAGS) $(ROOTDYNAMICLIBS) -o$@

ViewerGUI:
	$(ROOTCLING) -f guiDict.cxx $(DECODE)/Event.cxx $(DECODE)/Cluster.cxx $(DECODE)/LadderConf.cxx -c $(SRC)/viewerGUI.hh $(SRC)/guiLinkDef.h
	$(CXX) $(SRC)/viewerGUI.cxx guiDict.cxx $(INCLUDES) $(ROOTVIEWERLIBS) -o$@

ViewerFOOT: ./obj/viewerFOOT.o $(COMMON)/obj/Utilities.o libEvent
	$(CXX) $(CFLAGS) $< $(ADDLDFLAGS) $(ROOTDYNAMICLIBS) $(COMMON)/obj/Utilities.o $(DECODELIBS) -o$@

Analysis: ./obj/Analysis.o $(COMMON)/obj/TrackSelection.o $(COMMON)/obj/Utilities.o libEvent
	$(CXX) $(CFLAGS) $< $(ADDLDFLAGS) $(ROOTDYNAMICLIBS) $(COMMON)/obj/TrackSelection.o $(COMMON)/obj/Utilities.o $(DECODELIBS) -o$@

AnalysisFOOT: ./obj/AnalysisFOOT.o $(COMMON)/obj/TrackSelection.o $(COMMON)/obj/Utilities.o libEvent
	$(CXX) $(CFLAGS) $< $(ADDLDFLAGS) $(ROOTDYNAMICLIBS) $(COMMON)/obj/TrackSelection.o $(COMMON)/obj/Utilities.o $(DECODELIBS) -o$@

./obj/%.o: ./src/%.C
	@if ! [ -d $(OBJ) ] ; then mkdir -p $(OBJ); fi
	$(CXX) $(CFLAGS) $(INCLUDES) -c $< -o $@

./obj/%.o: ./src/%.cxx
	@if ! [ -d $(OBJ) ] ; then mkdir -p $(OBJ); fi
	$(CXX) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(COMMON)/obj/%.o: $(COMMON)/%.C
	@if ! [ -d $(COMMON)/$(OBJ) ] ; then mkdir -p $(COMMON)/$(OBJ); fi
	$(CXX) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(COMMON)/obj/%.o: $(COMMON)/%.cxx
	@if ! [ -d $(COMMON)/$(OBJ) ] ; then mkdir -p $(COMMON)/$(OBJ); fi
	$(CXX) $(CFLAGS) $(INCLUDES) -c $< -o $@

libEvent:
	make -C $(DECODE)

clean:
	rm -Rf ./obj
	rm -f ./Analysis
	rm -f ./AnalysisFOOT
	rm -f ./ViewerGUI
	rm -f ./ViewerFOOT

cleanALL: clean
	make -C ../Decode clean
	rm -f $(COMMON)/$(OBJ)/*.o
