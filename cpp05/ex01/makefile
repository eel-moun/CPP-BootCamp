CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Bureaucrat.cpp main.cpp Form.cpp
OBJ = $(SRC:.cpp=.o)

all: Bureaucrat

Bureaucrat: $(OBJ) Bureaucrat.hpp Form.hpp
	$(CC) $(FLAGS) $(OBJ) -o Bureaucrat

%.o : %.cpp Bureaucrat.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Bureaucrat

fclean: clean
	rm -rf $(OBJ)

re: fclean Bureaucrat