/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:00:47 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:00:48 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void ) {
    Point A(0,0);
    Point B(10,30);
    Point C(20,0);
    Point P(30,15);

    std::cout << bsp(A, B, C,P) << std::endl;
return 0;
}