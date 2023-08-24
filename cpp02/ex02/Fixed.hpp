/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:01:12 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:01:13 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
    private:
        int num;
        static const int num_fb;

    public:
        int     getRawBits( void ) const;
        void    setRawBits( int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

        static Fixed& min(Fixed& f1, Fixed& f2);
        static const Fixed& min(const Fixed& f1,const Fixed& f2);
        static Fixed& max(Fixed& f1, Fixed& f2);
        static const Fixed& max(const Fixed& f1,const Fixed& f2);




        Fixed();
        Fixed(const int a);
        Fixed(const float b);
        Fixed(const Fixed& fixed);
        ~Fixed();
        Fixed& operator = (const Fixed& rhs);
        
        bool operator > (const Fixed& rhs) const;
        bool operator < (const Fixed& rhs) const;
        bool operator >= (const Fixed& rhs) const;
        bool operator <= (const Fixed& rhs) const;
        bool operator == (const Fixed& rhs) const;
        bool operator != (const Fixed& rhs) const;

        Fixed& operator + (const Fixed& rhs);
        Fixed& operator - (const Fixed& rhs);
        Fixed& operator * (const Fixed& rhs);
        Fixed& operator / (const Fixed& rhs);

        Fixed& operator ++();
        Fixed operator ++(int);
        Fixed& operator --();
        Fixed operator --(int);
};

std::ostream& operator << (std::ostream& out, const Fixed& fixed);
#endif