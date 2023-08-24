/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:00:44 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:00:45 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point{
    private:
        const Fixed x;
        const Fixed y;

    public:
        Fixed get_x() const;
        Fixed get_y() const;
        Point();
        Point(const float x, const float y);
        Point(const Point& p);
        ~Point();
        Point& operator = (const Point& p);
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif