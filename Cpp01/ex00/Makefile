SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -f
Zombie = zombie
all : $(Zombie)
$(Zombie) : $(SRC)
	$(GPP) $(GFLAGS) $(SRC) -o $(Zombie)
clean :
	$(RM) $(Zombie)
re : fclean all
