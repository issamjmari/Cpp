SRC = Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = Brain_sounds

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