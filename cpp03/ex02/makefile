CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: FragTrap

FragTrap: $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(FLAGS) $(OBJ) -o FragTrap

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf FragTrap

fclean: clean
	rm -rf $(OBJ)

re: fclean FragTrap