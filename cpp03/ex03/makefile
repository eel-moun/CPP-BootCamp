CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: DiamondTrap

DiamondTrap: $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(CC) $(FLAGS) $(OBJ) -o DiamondTrap

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf DiamondTrap

fclean: clean
	rm -rf $(OBJ)

re: fclean DiamondTrap