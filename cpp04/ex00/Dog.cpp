#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog& dog){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "bark" << std::endl;
}