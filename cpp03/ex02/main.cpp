#include "FragTrap.hpp"

int main(){
    FragTrap a("tacos");

    a.attack("piza");
    std::cout << a.get_Ep() << std::endl;
    std::cout << a.get_Hp() << std::endl;
    a.takeDamage(30);
    std::cout << a.get_Hp() << std::endl;
    a.beRepaired(30);
    std::cout << a.get_Hp() << std::endl;
    std::cout << a.get_Ep() << std::endl;
    a.highFivesGuys();
}