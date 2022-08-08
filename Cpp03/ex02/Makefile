SRC = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror -fsanitize=address
RM = rm -rf
NAME = FragTrap

all : $(NAME)
$(NAME) : $(SRC)
	$(GPP) $(GFLAGS) $(SRC) -o $(NAME)
fclean :
	$(RM) $(NAME)
re : fclean all