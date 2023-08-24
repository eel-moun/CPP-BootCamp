CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: temp

temp:  $(OBJ) Array.hpp main.cpp
	$(CC) $(FLAGS) $(OBJ) -o temp

%.o : %.cpp Array.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf temp

fclean: clean
	rm -rf $(OBJ);

re: fclean temp