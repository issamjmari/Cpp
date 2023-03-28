NAME=RPN
CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
RM=rm -rf

HEADERS = RPN.hpp
SOURCES = main.cpp \
		  RPN.cpp

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