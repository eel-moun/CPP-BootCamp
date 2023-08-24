/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:50:34 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:50:45 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "unistd.h"

int main()
{
    int i = 0;
    Zombie z("ali");
    Zombie *zom;
    zom = z.zombieHorde(10,"tacos");
    while(i < 10)
    {
        zom[i].announce();
        i++;
    }
    delete [] zom;
}