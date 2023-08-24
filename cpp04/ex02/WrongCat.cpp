#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& cat){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = cat;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "growls" << std::endl;
}