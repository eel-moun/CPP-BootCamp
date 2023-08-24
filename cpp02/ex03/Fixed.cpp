/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:00:54 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:00:55 by eel-moun         ###   ########.fr       */
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

Fixed& Fixed::min(Fixed& f1, Fixed& f2){
    if(f1 > f2)
        return(f2);
    return(f1);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2){
    if(f1 > f2)
        return(f2);
    return(f1);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2){
    if(f1 < f2)
        return(f2);
    return(f1);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2){
    if(f1 < f2)
        return(f2);
    return(f1);
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
    num = a << num_fb;
}

Fixed::Fixed(const float a){
    num = std::roundf(a * (1 << num_fb));
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->num = rhs.getRawBits();
    return *this;
}

bool Fixed::operator > (const Fixed& rhs) const{
    if(this->num > rhs.num)
        return(true);
    return(false);
}

bool Fixed::operator < (const Fixed& rhs) const{
    if(this->num < rhs.num)
        return(true);
    return(false);
}

bool Fixed::operator >= (const Fixed& rhs) const{
    if(this->num >= rhs.num)
        return(true);
    return(false);
}

bool Fixed::operator <= (const Fixed& rhs) const{
    if(this->num <= rhs.num)
        return(true);
    return(false);
}

bool Fixed::operator == (const Fixed& rhs) const{
    if(this->num == rhs.num)
        return(true);
    return(false);
}

bool Fixed::operator != (const Fixed& rhs) const{
    if(this->num == rhs.num)
        return(true);
    return(false);
}

Fixed& Fixed::operator + (const Fixed& rhs){
    this->num += rhs.num;
    return *this;
}

Fixed& Fixed::operator - (const Fixed& rhs){
    this->num -= rhs.num;
    return *this;
}

Fixed& Fixed::operator * (const Fixed& rhs){
    num = num * rhs.toFloat();
    return *this;
}

Fixed& Fixed::operator / (const Fixed& rhs){
    this->num /= rhs.toFloat();
    return *this;
}

Fixed& Fixed::operator ++(){
    ++num;
    return(*this);
}

Fixed Fixed::operator ++(int){
    Fixed tmp = *this;
    (this->num)++;
    return(tmp);
}

 Fixed& Fixed::operator --(){
    --num;
    return(*this);
}

Fixed Fixed::operator --(int){
    Fixed temp = *this;
    (this->num)--;
    return(temp);
}

std::ostream& operator << (std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return(out);
}