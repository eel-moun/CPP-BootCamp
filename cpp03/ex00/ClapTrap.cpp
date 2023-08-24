#include "ClapTrap.hpp"

std::string ClapTrap::get_name(){
    return Name;
}

int ClapTrap::get_Hp(void){
    return Hit_points;
}

int ClapTrap::get_Ep(void){
    return Energy_points;
}

int ClapTrap::get_Ad(void){
    return Attack_damage;
}

void ClapTrap::set_Hp(unsigned int amount){
    this->Hit_points = amount;
}

void ClapTrap::set_Ep(unsigned int amount){
    this->Energy_points = amount;
}

void ClapTrap::set_Ad(unsigned int amount){
    this->Attack_damage = amount;
}

void ClapTrap::set_name(std::string name){
    this->Name = name;
}
void ClapTrap::attack(const std::string& target){
    if(this->Energy_points > 0)
    {
        std::cout << "ClapTrap "<< Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
    }
    else
        std::cout << "not enough energy" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount){
    Hit_points -= amount;
    std::cout << "ClapTrap "  << Name << " has taken " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(Energy_points > 0)
    {
        std::cout << "ClapTrap "  << Name << " has healed " << amount << " of hit points" << std::endl;
        Hit_points += amount;
        Energy_points--;
    }
    else
        std::cout << "not enough energy" << std::endl; 
}

ClapTrap::ClapTrap(){
    std::cout << "default constructor called" << std::endl;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap& clap){
    std::cout << "copy constructor called" << std::endl;
    *this = clap;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "name constructor called" << std::endl;
    Name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (ClapTrap& clap){
    std::cout << "copy assignement operator called" << std::endl;
    this->Name = clap.Name;
    this->Hit_points = clap.Hit_points;
    this->Energy_points = clap.Energy_points;
    this->Attack_damage = clap.Attack_damage;
    return *this;
}