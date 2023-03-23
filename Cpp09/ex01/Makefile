NAME=RPN
CC=c++
CPPFLAGS= -Wall -Wextra -Werror -std=c++98
FS= -fsanitize=address -g
RM=rm -rf

HEADERS = RPN.hpp
SOURCES = main.cpp \
		  RPN.cpp

OBJECTS=$(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) $(FS) $(OBJECTS) -o $(NAME)

$(OBJECTS) : $(HEADERS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all