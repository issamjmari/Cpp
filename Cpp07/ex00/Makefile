SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = few_functions

all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) $(OBJ) -o $(NAME)
%.o: %.cpp
	$(GPP) $(GFLAGS) -c $?
clean:
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all