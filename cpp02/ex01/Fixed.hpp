/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:01:20 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:01:21 by eel-moun         ###   ########.fr       */
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

        Fixed();
        Fixed(const int a);
        Fixed(const float b);
        Fixed(const Fixed& fixed);
        ~Fixed();
        Fixed& operator= (const Fixed& rhs);
};

std::ostream& operator << (std::ostream& out, const Fixed& fixed);
#endif