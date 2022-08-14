SRC = Harl.cpp main.cpp
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -f
HARL = harlFilter
all :
	$(GPP) $(GFLAGS) $(SRC) -o $(HARL)
clean :
	$(RM) $(HARL)
re : clean all

# SRC = Harl.cpp main.cpp
# OBJ = $(SRC:.cpp=.o)
# CC = c++ -std=c++98
# CFLAGS = -Wall -Wextra -Werror
# LIB = harlFilter.a
# NAME = harlFilter
# RM = rm -f

# all : $(NAME)
# $(NAME) : $(OBJ)
#         ar rcs $(LIB) $(OBJ)
#         $(CC) $(LIB) $(CFLAGS) -o $(NAME)
# clean :
#         $(RM) $(OBJ) $(LIB)
# fclean : clean
#         $(RM) $(NAME)
# re : fclean all bonus