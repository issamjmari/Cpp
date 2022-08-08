SRC = ClapTrap.cpp main.cpp
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = ClapTrap

all : $(NAME)
$(NAME) : $(SRC)
	$(GPP) $(GFLAGS)  $(SRC) -o $(NAME)
fclean :
	$(RM) $(NAME)
re : fclean all