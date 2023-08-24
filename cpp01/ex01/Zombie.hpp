/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:13 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:14 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
	public:
		void announce(void);
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		Zombie* zombieHorde( int N, std::string name );
		void setname(std::string Name);

	Zombie();	
	Zombie(std::string Name);
	~Zombie(void);

	private:
		std::string name;

};
#endif