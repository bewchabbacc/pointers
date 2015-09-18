# Makefile for Pointers lecture
# Written by Steven Gabarro for Bloomberg
# To use simply type "make testN" where N is the test number you wish to use
# that will compile the one test and execute it
# make all will make ALL of them

HELPSRC = #helpers.cpp
HELPOBJ  = #$(HELPSRC:.cpp=.o)
CXXFLAGS += -std=c++03 -Wall -pedantic-errors
RM = rm -f

all: test1

test1: $(HELPOBJ) test1.o
	$(CXX) $(CXXFLAGS) $^ -o $@.out
	@echo "#####  TEST 1  #########"
	@./$@.out

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *.core

re: clean all
