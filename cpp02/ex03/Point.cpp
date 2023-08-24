/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:00:38 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:00:39 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() :x(0),y(0){
    std::cout << "point def constructor"<<std::endl;
}

Point::Point(const float x, const float y): x(x), y(y){
    std::cout << "point float constructor"<<std::endl;
}

Point::Point(const Point& p):x(p.x),y(p.y){
    std::cout << "point copy constructor"<<std::endl;
}

Point& Point::operator = (const Point& p) {
    (Fixed) x = p.x;
    (Fixed) y = p.y;
    return *this;
}

Point::~Point(){
    std::cout << "point destruct"<<std::endl;
}

Fixed Point::get_x() const{
    return this->x;
}

Fixed Point::get_y() const{
    return this->y;
}