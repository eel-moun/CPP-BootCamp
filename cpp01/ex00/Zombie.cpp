/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:50:28 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:50:29 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



Zombie::Zombie(std::string Name)
{
    name = Name;
    std::cout << "constructor called " << name <<  std::endl;
};

Zombie::~Zombie(void){
    std::cout << "destructing " << this->name << std::endl;
}