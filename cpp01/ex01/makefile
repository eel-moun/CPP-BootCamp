CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: Zombie

Zombie: Zombie.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o Zombie

%.o : %.cpp Zombie.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Zombie;

fclean: clean
	rm -rf $(OBJ);

re: clean Zombie;