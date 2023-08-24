#include "Ice.hpp"

Ice::Ice(){
    std::cout << "Ice default constructor called" <<std::endl;
    type = "ice";
}

Ice::Ice(Ice& ice){
    std::cout << "Ice copy constructor called" <<std::endl;
    *this = ice;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" <<std::endl;
}

AMateria* Ice::clone() const{
    Ice* ret = new Ice();
    return ret;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}