SRC = Bureaucrat.cpp Form.cpp GradeTooLowException.cpp GradeTooHighException.cpp \
PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp \
Intern.cpp
OBJ = $(SRC:.cpp=.o)
GPP = c++ -std=c++98
GFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = intern_form

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
