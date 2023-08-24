CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)

all: Span

Span:  $(OBJ) Span.hpp
	$(CC) $(FLAGS) $(OBJ) -o Span

%.o : %.cpp Span.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf Span

fclean: clean
	rm -rf $(OBJ);

re: fclean Span