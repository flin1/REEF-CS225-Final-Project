EXE = main
OBJS = main.o graph.o

CXX = clang++
LD = clang++

WARNINGS = -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function
CXXFLAGS = -std=c++1y -stdlib=libc++ -O0 $(WARNINGS) -g -c
LDFLAGS = -std=c++1y -stdlib=libc++ -lc++abi
MKDIR_P = mkdir -p


all : $(EXE)

$(EXE) : output_msg $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXE) 

main.o : main.cpp outputs
	$(CXX) $(CXXFLAGS) main.cpp 
	
outputs:
	mkdir -p Outputs

test : output_msg
	$(LD) $(LDFLAGS) -o test

tests.o : tests/tests.cpp tests/catch/catch.hpp graph.hpp
	$(CXX) $(CXXFLAGS) tests/tests.cpp

graph.o:
	$(CXX) $(CXXFLAGS) src/graph.cpp

.PHONY : output_msg

clean : 
	-rm -f *.o $(EXE) test ./Outputs/*

# Custom Clang version enforcement Makefile rule:
ccred=$(shell echo -e "\033[0;31m")
ccyellow=$(shell echo -e "\033[0;33m")
ccend=$(shell echo -e "\033[0m")

IS_EWS=$(shell hostname | grep "ews.illinois.edu")
IS_CORRECT_CLANG=$(shell clang -v 2>&1 | grep "version 6")
ifneq ($(strip $(IS_EWS)),)
ifeq ($(strip $(IS_CORRECT_CLANG)),)
CLANG_VERSION_MSG = $(error $(ccred) On EWS, please run 'module load llvm/6.0.1' first when running CS225 assignments. $(ccend))
endif
else
CLANG_VERSION_MSG = $(warning $(ccyellow) Looks like you are not on EWS. Be sure to test on EWS before the deadline. $(ccend))
endif

output_msg: ; $(CLANG_VERSION_MSG)