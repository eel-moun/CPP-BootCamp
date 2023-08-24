/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:36:39 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/04 15:36:40 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int		i;
	int		j;


	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		j = 1;
		while(j < ac)
		{
			i = 0;
			while (i < (int)strlen(av[j]))
			{
				av[j][i] = toupper(av[j][i]);
				i++;
			}
			std::cout<<av[j];
			j++;
		}
	}
	std::cout<<std::endl;
	return (0);
}