#include "DiamondTrap.hpp"

int main(){
    DiamondTrap a("tacos");

    a.attack("piza");
    std::cout << a.get_Ep() << std::endl;
    std::cout << a.get_Hp() << std::endl;
    a.takeDamage(30);
    std::cout << a.get_Hp() << std::endl;
    a.beRepaired(30);
    std::cout << a.get_Hp() << std::endl;
    std::cout << a.get_Ep() << std::endl;
    a.whoAmI();
}