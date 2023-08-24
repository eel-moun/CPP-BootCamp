#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal default constructor called" << std::endl;
    type = "Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = animal;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal){
    std::cout << "copy assignement operator called" << std::endl;
    type = animal.type;
    return *this;
}

std::string WrongAnimal::getType() const{
    return type;
}

void WrongAnimal::setType(std::string type){
    this->type = type;
}

void WrongAnimal::makeSound(void) const{

}