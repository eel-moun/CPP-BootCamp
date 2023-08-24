#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap {
    private:
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;

    public:
        int get_Hp(void);
        int get_Ep(void);
        int get_Ad(void);
        std::string get_name(void);
        void set_Hp(unsigned int amount);
        void set_Ep(unsigned int amount);
        void set_Ad(unsigned int amount);
        void set_name(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        ClapTrap();
        ClapTrap(ClapTrap& clap);
        ClapTrap(std::string name);
        ~ClapTrap();

        ClapTrap& operator = (ClapTrap& clap);
};

#endif