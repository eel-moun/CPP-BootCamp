#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
    CatBrain = new Brain();
}

Cat::Cat(const Cat& cat){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete CatBrain;
}

Cat& Cat::operator = (const Cat& cat){
    type = cat.type;
    CatBrain = cat.CatBrain;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "growls" << std::endl;
}