#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void){
    std::cout << "High five!" << std::endl;
}

void FragTrap::attack(const std::string& target){
    if(get_Ep() > 0)
    {
        std::cout << "FragTrap "<< get_name() << " attacks " << target << ", causing " << get_Ad() << " points of damage!" << std::endl;
        set_Ep((get_Ep() - 1));
    }
    else
        std::cout << "not enough energy" << std::endl; 
}
FragTrap::FragTrap(std::string name){
    std::cout << "FragTrap name constructor called" << std::endl;

    set_name(name);
    set_Hp(100);
    set_Ep(100);
    set_Ad(30);
}

FragTrap::FragTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;

    set_Hp(100);
    set_Ep(100);
    set_Ad(30);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}