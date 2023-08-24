#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    std::cout << "DiamondTrap Default constructor" << std::endl;
    set_Hp(100);
    set_Ep(50);
    set_Ad(30);
}

DiamondTrap::DiamondTrap(std::string name){
    std::cout << "DiamondTrap name constructor" << std::endl;

    this->Name = name;
    set_name(name + "_clap_name");
    set_Hp(100);
    set_Ep(50);
    set_Ad(30);
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(){
    std::cout << "i am DiamondTrap " << this->Name << " also " << get_name() << std::endl;
}