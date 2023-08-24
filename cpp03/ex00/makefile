CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = ClapTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: ClapTrap

ClapTrap: $(OBJ) ClapTrap.hpp
	$(CC) $(FLAGS) $(OBJ) -o ClapTrap

%.o : %.cpp ClapTrap.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf ClapTrap

fclean: clean
	rm -rf $(OBJ)

re: fclean ClapTrap