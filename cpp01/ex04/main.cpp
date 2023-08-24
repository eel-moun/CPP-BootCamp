/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:51:49 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:51:50 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::ifstream first_file;
    std::ofstream second_file;
    std::string line;
    unsigned long i;

    i = 0;
    if(ac != 4)
    {
        std::cout << "you need 3 parameters" << std::endl;
        return 0;
    }
    first_file.open(av[1]);
    second_file.open(std::string(av[1]).append(".replace"));
    if(first_file && second_file)
    {
        while(std::getline(first_file, line))
        {
            while(line[i])
            {
                if(line[i] == av[2][0] && i == line.find(av[2]))
                {
                    second_file << av[3];
                    i += strlen(av[2]);
                    continue;
                }
                second_file << line[i];
                i++;
            }
            second_file << "\n";
            i = 0;
        }
    }
    first_file.close();
    second_file.close();
    return 0;
}