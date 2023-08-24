CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = Fixed.cpp main.cpp Point.cpp  bsp.cpp
OBJ = $(SRC:.cpp=.o)

all: Fixed

Fixed: $(OBJ) Fixed.hpp Point.hpp
	$(CC) $(FLAGS) $(OBJ) -o Fixed

%.o : %.cpp Fixed.hpp Point.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Fixed

fclean: clean
	rm -rf $(OBJ)

re: fclean Fixed