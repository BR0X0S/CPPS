/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:06 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/22 20:36:48 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	const Fixed a;
	// std::cout << a.getRawBits() << std::endl;
	// a.setRawBits(7);
	Fixed b( a );
	// a.setRawBits(9);
	// std::cout << b.getRawBits() + 1 << std::endl;
	Fixed c;
	// a.setRawBits(5);
	c = a;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
