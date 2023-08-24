/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:01:16 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:01:17 by eel-moun         ###   ########.fr       */
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

float Fixed::toFloat(void) const {
    return ((float) this->num / (float)(1 << num_fb));
}

int Fixed::toInt(void) const {
    return (this->num >> num_fb);
}

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    num = 0;
}

Fixed::Fixed(const Fixed& fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int a){
    std::cout << "int constructor" << std::endl;
    num = a << num_fb;
}

Fixed::Fixed(const float a){
    std::cout << "float constructor" << std::endl;
    num = std::roundf(a * (1 << num_fb));
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

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return(out);
}