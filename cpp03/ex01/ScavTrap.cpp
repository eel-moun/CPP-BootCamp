#include "ScavTrap.hpp"

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->get_name() << " has entered Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if(get_Ep() > 0)
    {
        std::cout << "ScavTrap "<< get_name() << " attacks " << target << ", causing " << get_Ad() << " points of damage!" << std::endl;
        set_Ep((get_Ep() - 1));
    }
    else
        std::cout << "not enough energy" << std::endl; 
}
ScavTrap::ScavTrap(std::string name){
    std::cout << "ScavTrap name constructor called" << std::endl;

    set_name(name);
    set_Hp(100);
    set_Ep(50);
    set_Ad(20);
}

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;

    set_Hp(100);
    set_Ep(50);
    set_Ad(20);
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called" << std::endl;
}

