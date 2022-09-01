SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
HEADER = Array.hpp
RM = rm -rf
NAME = Array

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