/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:01:30 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:01:31 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
    private:
        int num;
        static const int num_fb;

    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw);

        Fixed();
        Fixed(Fixed& fixed);
        ~Fixed();
        Fixed& operator= (const Fixed& rhs);
};
#endif