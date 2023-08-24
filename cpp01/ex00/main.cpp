/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:50:18 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:50:19 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void    leak()
{
    system("leaks Zombie");
}
int main()
{
    Zombie z("ali");
    Zombie *zom;
    z.announce();
    z.randomChump("piza");
    zom = z.newZombie("tacos");
    delete zom;
}  