#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat& cat){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "growls" << std::endl;
}