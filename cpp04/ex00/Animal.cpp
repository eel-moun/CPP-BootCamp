#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal& animal){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal){
    std::cout << "copy assignement operator called" << std::endl;
    type = animal.type;
    return *this;
}

std::string Animal::getType() const{
    return type;
}

void Animal::setType(std::string type){
    this->type = type;
}

void Animal::makeSound(void) const{

}