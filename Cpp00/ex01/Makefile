SRC = PhoneBook.cpp Contact.cpp main.cpp
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
PHONEBOOK = phonebook

all : $(PHONEBOOK)
$(PHONEBOOK) : $(SRC)
	$(GPP) $(GFLAGS)  $(SRC) -o $(PHONEBOOK)
clean :
	$(RM) $(PHONEBOOK)
re : fclean all