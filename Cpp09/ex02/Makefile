NAME=PmergeMe
CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM=rm -rf

HEADERS = PmergeMe.hpp
SOURCES = main.cpp \
		  PmergeMe.cpp

OBJECTS=$(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS) : $(HEADERS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all