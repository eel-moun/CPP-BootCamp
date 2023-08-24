/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:28 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:29 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& new_weapon){
    weapon = &new_weapon;
}

void HumanB::attack(void){
    if(this->weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << "no weapon to attack with" << std::endl;
}

HumanB::HumanB(std::string name){
    this->weapon = NULL;
    this->name = name;
}

HumanB::~HumanB(){
}