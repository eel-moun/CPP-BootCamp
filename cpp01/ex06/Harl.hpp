/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:52:44 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/06 14:52:45 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:
    void complain(std::string level);
    Harl();
    ~Harl();
};

#endif