/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:50:44 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:50:45 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *zom = new Zombie(name);
    return(zom);
}

Zombie* Zombie::zombieHorde( int N, std::string name ){
    int i = 0;
    Zombie *zombie = new Zombie[N];
    
    while(i <= N)
    {
        zombie[i].setname(name);
        i++;
    }
    return (zombie);
}