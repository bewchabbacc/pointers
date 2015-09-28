# Makefile for Pointers lecture
# Written by Steven Gabarro for Bloomberg
# To use simply type "make testN" where N is the test number you wish to use
# that will compile the one test and execute it
# make all will make ALL of them

CXXFLAGS += -std=c++03 -Wall -pedantic-errors
RM = rm -f
NAME = test

all: $(NAME)1 $(NAME)2 $(NAME)3 $(NAME)4 $(NAME)5 $(NAME)6

$(NAME)6: $(NAME)6.o
	$(CXX) $(CXXFLAGS) $^ -o $@.out
	@echo "\n#####  $@  #########"
	@./$@.out this is a call to all my past resignations
	@echo "\n\n"

$(NAME)%: $(NAME)%.o
	$(CXX) $(CXXFLAGS) $^ -o $@.out
	@echo "\n#####  $@  #########"
	@./$@.out
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
