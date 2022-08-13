SRC = HumanA.cpp \
HumanB.cpp \
Weapon.cpp \
main.cpp
C++ = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -f
Humans = Humans

all : $(Humans)
$(Humans) : $(SRC)
	$(C++) $(GFLAGS) $(SRC) -o $(Humans)
clean :
	$(RM) $(Humans)
re : fclean all
