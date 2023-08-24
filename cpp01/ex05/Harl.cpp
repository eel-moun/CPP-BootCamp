/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:52:05 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:52:07 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do" << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn t put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptrf [4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while(i < 4)
    {
        if(!level.compare(levels[i]))
        {
            (this->*ptrf[i])();
            return ;
        }
        i++;
    }
    std::cout << "wrong argument enter either DEBUG, INFO, WARNING or ERROR." << std::endl;
}

Harl::Harl(void)
{
    return ;
};

Harl::~Harl(void)
{
    return ;
};