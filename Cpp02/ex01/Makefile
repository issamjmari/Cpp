SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
LIB = Fixed.a
NAME = Fixed
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(LIB) $(CFLAGS) -o $(NAME)
clean :
	$(RM) $(OBJ) $(LIB)
fclean : clean
	$(RM) $(NAME)
re : fclean all bonus