/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:24 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/31 19:14:55 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private :

		int					f_value;
		static const int	fb;

	public :

		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		Fixed(Fixed const &copy);
		Fixed &operator = (Fixed const &src);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

};

std::ostream &operator << (std::ostream &out, Fixed const &src);

#endif