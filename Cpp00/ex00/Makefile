SRC = $(wildcard *.c)
OBJ = $(wildcard *.o)
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = megaphone

all: $(NAME)

%.o: %.cpp
	$(GPP) $(GFLAGS) -c $?

$(NAME): $(OBJ)
	$(GPP) $(OBJ) -o $(NAME)
