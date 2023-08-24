CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98 -g
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: Harl

Harl: $(OBJ) Harl.hpp
	$(CC) $(FLAGS) $(OBJ) -o Harl

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Harl

fclean: clean
	rm -rf $(OBJ)

re: clean Harl