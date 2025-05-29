/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:39:58 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/29 21:28:38 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
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