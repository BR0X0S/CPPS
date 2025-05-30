/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:39:58 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/30 19:07:55 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{}

Point::Point(Fixed const X, Fixed const Y): x(X), y(Y)
{}

Point::Point(Point const &cpy): x(cpy.x), y(cpy.y)
{}

Point &Point::operator = (Point const &src)
{
	(void)src;
	return (*this);
}

Point::~Point()
{}

int	Point::getXvalue() const
{
	return(x.getRawBits());
}

int	Point::getYvalue() const
{
	return(y.getRawBits());
}
