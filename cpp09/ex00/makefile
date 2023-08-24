CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = BitcoinExchange.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = btc

all: $(NAME)

$(NAME):  $(OBJ) BitcoinExchange.hpp
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp BitcoinExchange.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJ);

re: fclean $(NAME)