CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

all: war

war: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o war

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf war

fclean: clean
	rm -rf $(OBJ)

re: clean war