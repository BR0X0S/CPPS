/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:37 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/25 19:07:39 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb(8);

Fixed::Fixed(): f_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{	
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator = (Fixed const &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &src)
		this->f_value = src.f_value;
	return (*this);
}

Fixed::Fixed(const int i) : f_value(i << fb)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : f_value(roundf(f * (1 << fb)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{	
	// std::cout << "getRawBits member function called" << std::endl;
	return (f_value);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
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
