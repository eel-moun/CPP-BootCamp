CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98 -g
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: harlFilter

harlFilter: $(OBJ) Harl.hpp
	$(CC) $(FLAGS) $(OBJ) -o harlFilter

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf harlFilter

fclean: clean
	rm -rf $(OBJ)

re: clean harlFilter