CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = Animal.cpp main.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

all: Animals

Animals: $(OBJ) Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
	$(CC) $(FLAGS) $(OBJ) -o Animals

%.o : %.cpp Animal.hpp Cat.hpp Dog.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Animals

fclean: clean
	rm -rf $(OBJ)

re: fclean Animals