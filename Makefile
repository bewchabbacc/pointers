# Makefile for Pointers lecture
# Written by Steven Gabarro for Bloomberg
# To use simply type "make testN" where N is the test number you wish to use
# that will compile the one test and execute it
# make all will make ALL of them

HELPSRC = #helpers.cpp
HELPOBJ  = #$(HELPSRC:.cpp=.o)
CXXFLAGS += -std=c++03 -Wall -pedantic-errors
RM = rm -f
NAME = test

all: $(NAME)1 $(NAME)2

$(NAME)1: $(HELPOBJ) $(NAME)1.o
	$(CXX) $(CXXFLAGS) $^ -o $@.out
	@echo "\n#####  $@  #########"
	@./$@.out
	@echo "\n\n"

$(NAME)2: $(HELPOBJ) $(NAME)2.o
	$(CXX) $(CXXFLAGS) $^ -o $@.out
	@echo "\n\n#####  $@  #########"
	@./$@.out
	@echo "\n\n"

$(NAME)3: $(HELPOBJ) $(NAME)3.o
	$(CXX) $(CXXFLAGS) $^ -o $@.out
	@echo "\n\n#####  $@  #########"
	@./$@.out This is a call to all my past resignations
	@echo "\n\n"

clean:
	-$(RM) *~
	-$(RM) \#*
	-$(RM) *.o
	-$(RM) *.swp
	-$(RM) *.core

fclean: clean
	-$(RM) *.out

re: fclean all
