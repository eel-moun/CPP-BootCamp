/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:52:41 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:52:42 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do" << std::endl;
    std::cout << std::endl;
}

void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn t put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout << "Ive been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while(i < 4)
    {
        if(!level.compare(levels[i]))
            break ;
        i++;
    }
    switch (i)
    {
        case 0:
            Harl::debug();

        case 1:
            Harl::info();

        case 2:
            Harl::warning();

        case 3:
            Harl::error();
            break;
            
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

Harl::Harl(void)
{
    return ;
};

Harl::~Harl(void)
{
    return ;
};