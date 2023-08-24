#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& mater){
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = mater;
}

AMateria::AMateria(std::string const& type){
    std::cout << "AMateria type constructor called" << std::endl;
    this->type = type;
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator = (AMateria const & mater){
    this->type = mater.type;
    return *this;
}

std::string const& AMateria::getType() const{
    return type;
}

void AMateria::use(ICharacter& target){
    std::cout << this->type << "has been used on " << target.getName() << std::endl;
}