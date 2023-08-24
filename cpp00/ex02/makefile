CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = test.cpp Account.cpp
OBJ = $(SRC:.cpp=.o)

all: test

test:  $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o test

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf test

fclean: clean
	rm -rf $(OBJ);

re: clean test