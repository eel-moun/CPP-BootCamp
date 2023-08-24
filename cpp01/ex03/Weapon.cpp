/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:40 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:41 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string Weapon::getType(void) const {
    return type;
}

void Weapon::setType(std::string type){
    this->type = type;
}

Weapon::Weapon(){
    
}

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){
    return;
}