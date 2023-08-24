#include "Character.hpp"

Character::Character(){
    std::cout << "Character default constructor called" << std::endl; 
}

Character::Character(Character const& charac){
    std::cout << "character copy constructor called" << std::endl;
    *this = charac;
}

Character::~Character(){
    std::cout << "Character destructor called" << std::endl;
    int i = 0;

    while (i < 4)
    {
        if(inventory[i])
            delete inventory[i];
        i++;
    }
}

Character::Character(std::string const& name){
    std::cout << "Character name constructor called" << std::endl;
    this->name = name; 
}

Character& Character::operator = (Character const& charac){
    int i = 0;

    std::cout << "charac copy assignement operator called" << std::endl;
    this->name = charac.name;
    while (i < 4)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        i++;
    }
    i = 0;
    while (i < 4)
    {
        if (charac.inventory[i])
            this->inventory[i] = charac.inventory[i];
        i++;
    }
    return (*this);
}

void Character::equip(AMateria *m)
{
    if(m)
    {
        for(int i = 0; i < 4; i++)
        {
            if(!inventory[i])
            {
                inventory[i] = m;
                std::cout << "equiped" << std::endl;
                return ;
            }
        }
    }
}

void Character::unequip(int idx){
    if(inventory[idx])
    {
        inventory[idx] = NULL;
        std::cout << "unequiped"<< std::endl;
    }
}

void Character::use(int idx, ICharacter& target){
    if(inventory[idx])
    {
        inventory[idx]->use(target);
    }
}

std::string const& Character::getName() const{
    return (name);
}