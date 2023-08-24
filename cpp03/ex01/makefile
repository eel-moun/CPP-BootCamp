CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: ScavTrap

ScavTrap: $(OBJ) ClapTrap.hpp ScavTrap.hpp
	$(CC) $(FLAGS) $(OBJ) -o ScavTrap

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf ScavTrap

fclean: clean
	rm -rf $(OBJ)

re: fclean ScavTrap