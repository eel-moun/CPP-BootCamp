CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98 -g
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: cp

cp: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o cp

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf cp

fclean: clean
	rm -rf $(OBJ)

re: clean cp