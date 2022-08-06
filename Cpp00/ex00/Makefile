SRC = megaphone.cpp
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = megaphone

all : $(NAME)
$(NAME) : $(SRC)
	$(GPP) $(GFLAGS)  $(SRC) -o $(NAME)
clean :
	$(RM) $(NAME)
re : fclean all
