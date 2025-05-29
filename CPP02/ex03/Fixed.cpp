/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:37 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/29 15:48:08 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb(8);

Fixed::Fixed(): f_value(0)
{}

Fixed::Fixed(Fixed const &copy)
{	
	*this = copy;
}

Fixed &Fixed::operator = (Fixed const &src)
{
	if(this != &src)
		this->f_value = src.f_value;
	return (*this);
}

Fixed::Fixed(const int i) : f_value(i << fb)
{
	// std::cout << "Int Constructor Called" << std::endl;
}

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

bool Fixed::operator > (Fixed const &src) const
{
	if (f_value > src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator < (Fixed const &src) const
{
	if (f_value < src.f_value)
		return (true);
	return (false);
}
bool Fixed::operator >= (Fixed const &src) const
{
	if (f_value >= src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator <= (Fixed const &src) const
{
	if (f_value <= src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator == (Fixed const &src) const
{
	if (f_value == src.f_value)
		return (true);
	return (false);
}

bool Fixed::operator != (Fixed const &src) const
{
	if (f_value != src.f_value)
		return (true);
	return (false);
}

Fixed Fixed::operator + (Fixed const &src) const
{
	return ((f_value + src.f_value) >> fb);
}

Fixed Fixed::operator - (Fixed const &src) const
{
	return ((f_value - src.f_value) >> fb);
}

Fixed Fixed::operator / (Fixed const &src) const
{
	Fixed tmp;
	tmp.f_value = (f_value << fb ) / src.f_value; 
	return (tmp);
}

Fixed Fixed::operator * (Fixed const &src) const
{
	Fixed tmp;
	tmp.f_value = (f_value * src.f_value) >> fb; 
	return (tmp);
}

Fixed &Fixed::min(Fixed &fp1, Fixed &fp2)
{
	if (fp1 < fp2)
		return (fp1);
	return (fp2);
}

Fixed const &Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1 < fp2)
		return (fp1);
	return (fp2);
}

Fixed &Fixed::max(Fixed &fp1, Fixed &fp2)
{
	if (fp1 > fp2)
		return (fp1);
	return (fp2);
}

Fixed const &Fixed::max(Fixed const &fp1, Fixed const &fp2)
{
	if (fp1 > fp2)
		return (fp1);
	return (fp2);
}

Fixed Fixed::operator ++ (void)
{
	f_value++;
	return (*this);
}

Fixed Fixed::operator -- (void)
{
	f_value--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed tmp(*this);
	++f_value;
	return (tmp);
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp(*this);
		--f_value;
	return (tmp);
}
