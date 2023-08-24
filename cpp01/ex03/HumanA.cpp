/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:22 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:23 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::setWeapon(Weapon& new_weapon){
    weapon = &new_weapon;
}

void HumanA::attack(void){
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& new_weapon){
    this->weapon = &new_weapon;
    this->name = name;
}

HumanA::~HumanA(){
}