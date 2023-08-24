CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = AMateria.cpp Character.cpp Cure.cpp Ice.cpp main.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)

all: game

game: $(OBJ) AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp
	$(CC) $(FLAGS) $(OBJ) -o game

%.o : %.cpp AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf game

fclean: clean
	rm -rf $(OBJ)

re: fclean game