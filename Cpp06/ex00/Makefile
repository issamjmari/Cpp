SRC = converts.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = convert

all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) $(OBJ) -o $(NAME)
%.o: %.cpp
	$(GPP) $(GFLAGS) -c $?
clean:
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
clean_bin : fclean
	$(RM) *_shrubbery
re : fclean all