/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:37 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/27 19:09:18 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb(8);

Fixed::Fixed(): f_value(0)
{}

Fixed::Fixed(Fixed const &copy)
{	
	*this = copy;
	std::cout << "test" << std::endl;
}

Fixed &Fixed::operator = (Fixed const &src)
{
	if(this != &src)
		this->f_value = src.f_value;
	return (*this);
}

Fixed::Fixed(const int i) : f_value(i << fb)
{}

Fixed::Fixed(const float f) : f_value(roundf(f * (1 << fb)))
{}

Fixed::~Fixed()
{}

int Fixed::getRawBits() const
{	
	return (f_value);
}

void Fixed::setRawBits(int const raw)
{
	f_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)f_value / (1 << fb));
}

int		Fixed::toInt( void ) const
{
	return (f_value >> fb);
}

std::ostream &operator << (std::ostream &out, Fixed const &src)
{
	return(out << src.toFloat());
}

bool Fixed::operator > (Fixed const &src)
{
	if (f_value > src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator < (Fixed const &src)
{
	if (f_value < src.f_value)
		return (true);
	return (false);
}
bool Fixed::operator >= (Fixed const &src)
{
	if (f_value >= src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator <= (Fixed const &src)
{
	if (f_value <= src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator == (Fixed const &src)
{
	if (f_value == src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator != (Fixed const &src)
{
	if (f_value != src.f_value)
		return (true);
	return (false);
}

Fixed &Fixed::operator + (Fixed const &src)
{
	return (f_value + src.f_value);
}

Fixed &Fixed::operator - (Fixed const &src)
{
	
}

Fixed &Fixed::operator / (Fixed const &src)
{
	
}

Fixed &Fixed::operator * (Fixed const &src)
{
	
}
