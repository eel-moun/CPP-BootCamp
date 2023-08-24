#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
    DogBrain = new Brain();
}

Dog::Dog(const Dog& dog){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete DogBrain;
}

Dog& Dog::operator = (const Dog& dog){
    type = dog.type;
    DogBrain = dog.DogBrain;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "bark" << std::endl;
}