#include "ClapTrap.hpp"

int main(){
    ClapTrap a("tacos");

    a.attack("piza");
    std::cout << a.get_Hp() << std::endl;
    a.takeDamage(5);
    std::cout << a.get_Hp() << std::endl;
    a.beRepaired(5);
    std::cout << a.get_Hp() << std::endl;
}