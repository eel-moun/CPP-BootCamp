/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-moun <eel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:00:58 by eel-moun          #+#    #+#             */
/*   Updated: 2023/02/10 15:00:59 by eel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
static Fixed area(Point const a, Point const b, Point const c){
    Fixed area;

    area = ((a.get_x() * (b.get_y() - c.get_y())+ b.get_x() * (c.get_y() - a.get_y() ) + c.get_x() * (a.get_y() - b.get_y())) / 2);
    if(area < 0)
        return (area * -1);
    return(area);
}
bool bsp( Point const a, Point const b, Point const c, Point const point){
    Fixed A = area(a, b, c);
    Fixed A1 = area(a, b, point);
    Fixed A2 = area(b, c, point);
    Fixed A3 = area(c, a, point);

    if(A == (A1 + A2 + A3))
        return true;
    return false;
}