CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: Fixed

Fixed: $(OBJ) Fixed.hpp
	$(CC) $(FLAGS) $(OBJ) -o Fixed

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Fixed

fclean: clean
	rm -rf $(OBJ)

re: fclean Fixed