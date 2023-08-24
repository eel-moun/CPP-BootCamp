/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:25 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:26 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA{
    private:
        Weapon *weapon;
        std::string name;
    
    public:
        void setWeapon(Weapon& new_weapon);
        void attack(void);
    
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
};

#endif