CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: brain

brain: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o brain

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf brain

fclean: clean
	rm -rf $(OBJ)

re: clean brain