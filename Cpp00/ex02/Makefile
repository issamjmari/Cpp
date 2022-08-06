SRC = Account.cpp test.cpp
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = out_log.txt

all : $(NAME)
$(NAME) : $(SRC)
	$(GPP) $(GFLAGS)  $(SRC) -o $(NAME)
fclean :
	$(RM) $(NAME)
re : fclean all