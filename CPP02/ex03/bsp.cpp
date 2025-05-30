/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:40:44 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/30 17:23:40 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed trialculate(Point const &a, Point const &b, Point const &c)
{
	Fixed sum;

	sum = ((a.getXvalue() * (b.getYvalue() - c.getYvalue())) +
			(b.getXvalue() * (c.getYvalue() - a.getYvalue())) +
			(c.getXvalue() * (a.getYvalue() - b.getYvalue()))) / 2;
	if (sum < 0)
		return (sum * -1);
	return (sum);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed mainTriangle = trialculate(a, b, c);
	Fixed firstTriangle = trialculate(a, b, point);
	Fixed seacondTriangle = trialculate(a, point, c);
	Fixed therdTriangle = trialculate(point, b, c);

	if (firstTriangle == 0 || seacondTriangle == 0 || therdTriangle == 0)
		return (false);
	if (mainTriangle == (firstTriangle + seacondTriangle + therdTriangle))
		return (true);
	return (false);
}
