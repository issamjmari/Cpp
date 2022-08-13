SRC = main.cpp Zombie.cpp zombieHorde.cpp
C++ = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
OUTPUT = zombieHorde

all : $(OUTPUT)
$(OUTPUT) : $(SRC)
	$(C++) $(GFLAGS) $(SRC) -o $(OUTPUT)
clean :
	$(RM) $(OUTPUT)
re : fclean all