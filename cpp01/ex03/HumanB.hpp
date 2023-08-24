/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:31 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:32 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
    private:
        Weapon *weapon;
        std::string name;
    
    public:
        void setWeapon(Weapon& new_weapon);
        void attack(void);
    
    HumanB(std::string name);
    ~HumanB();
};

#endif