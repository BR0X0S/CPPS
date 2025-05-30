/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:40:17 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/30 16:48:48 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:

		Fixed const x;
		Fixed const y;

	public:

		Point();
		Point(Point const &cpy);
		Point &operator = (Point const &src);
		Point(Fixed const X, Fixed const Y);
		~Point();

		int	getXvalue() const;
		int	getYvalue() const;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif