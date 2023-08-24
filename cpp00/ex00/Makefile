CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: megaphone

megaphone:  $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o megaphone

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf megaphone

fclean: clean
	rm -rf $(OBJ);

re: clean megaphone
