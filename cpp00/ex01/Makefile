CC = c++
FLAGS = -Wall -Werror -Wextra --std=c++98
SRC = Contact.cpp main.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: PhoneBook

PhoneBook: Contact.hpp  PhoneBook.hpp $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o PhoneBook

%.o : %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf PhoneBook;

fclean: clean
	rm -rf $(OBJ);

re: clean PhoneBook;