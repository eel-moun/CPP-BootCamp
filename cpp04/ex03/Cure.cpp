#include "Cure.hpp"

Cure::Cure(){
    std::cout << "Cure default constructor called" <<std::endl;
    type = "cure";
}

Cure::Cure(Cure& cure){
    std::cout << "Cure copy constructor called" <<std::endl;
    *this = cure;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" <<std::endl;
}

AMateria* Cure::clone() const{
    Cure* ret = new Cure();
    return ret;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals "<< target.getName() << " 's wounds *" << std::endl;
}