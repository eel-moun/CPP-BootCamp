#include "ScavTrap.hpp"

int main(){
    ScavTrap a("tacos");

    a.attack("piza");
    std::cout << a.get_Ep() << std::endl;
    std::cout << a.get_Hp() << std::endl;
    a.takeDamage(20);
    std::cout << a.get_Hp() << std::endl;
    a.beRepaired(20);
    std::cout << a.get_Hp() << std::endl;
    std::cout << a.get_Ep() << std::endl;
    a.guardGate();
}