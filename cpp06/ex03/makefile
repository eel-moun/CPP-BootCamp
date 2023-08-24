CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Bureaucrat.cpp main.cpp AForm.cpp Intern.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp
OBJ = $(SRC:.cpp=.o)

all: Bureaucrat

Bureaucrat: $(OBJ) Bureaucrat.hpp AForm.hpp Intern.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp
	$(CC) $(FLAGS) $(OBJ) -o Bureaucrat

%.o : %.cpp Bureaucrat.hpp AForm.hpp Intern.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Bureaucrat

fclean: clean
	rm -rf $(OBJ)

re: fclean Bureaucrat