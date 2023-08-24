/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:04 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:05 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname(std::string Name){
    name = Name;
}

Zombie::Zombie(void){
    return;
}

Zombie::Zombie(std::string Name)
{
    std::cout << "constructor called" << std::endl;
    name = Name;
}

Zombie::~Zombie(void){
    std::cout << "destructing " << this->name << std::endl;
}