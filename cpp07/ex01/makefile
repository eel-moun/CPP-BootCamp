CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: temp

temp:  $(OBJ) Iter.hpp
	$(CC) $(FLAGS) $(OBJ) -o temp

%.o : %.cpp Iter.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf temp

fclean: clean
	rm -rf $(OBJ);

re: fclean temp