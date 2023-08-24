/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:44 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:45 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {
    private:
        std::string type;
    
    public:
        std::string getType(void) const;
        void setType(std::string type);
    
    Weapon();
    Weapon(std::string type);
    ~Weapon();
};

#endif