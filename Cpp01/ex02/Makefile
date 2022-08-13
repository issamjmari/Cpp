SRC = main.cpp
C++ = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
OUTPUT = ref

all : $(OUTPUT)
$(OUTPUT) : $(SRC)
	$(C++) $(GFLAGS) $(SRC) -o $(OUTPUT)
fclean :
	$(RM) $(OUTPUT)
re : fclean all