/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:01:27 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:01:28 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::num_fb = 8;

int Fixed::getRawBits( void ) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->num;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->num = raw;
}

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    num = 0;
}

Fixed::Fixed(Fixed& fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->num = rhs.getRawBits();
    return *this;
}