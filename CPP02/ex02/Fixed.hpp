/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:24 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/27 22:04:12 by oumondad         ###   ########.fr       */
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
		bool operator > (Fixed const &src) const;
		bool operator < (Fixed const &src) const;
		bool operator <= (Fixed const &src) const;
		bool operator >= (Fixed const &src) const;
		bool operator == (Fixed const &src) const;
		bool operator != (Fixed const &src) const;
		Fixed operator + (Fixed const &src) const;
		Fixed operator - (Fixed const &src) const;
		Fixed operator / (Fixed const &src) const;
		Fixed operator * (Fixed const &src) const;
		Fixed operator ++ (void);
		Fixed operator -- (void);
		Fixed operator ++ (int);
		Fixed operator -- (int);

		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed &min(Fixed &fp1, Fixed &fp2);
		static Fixed const &min(Fixed const &fp1, Fixed const &fp2);
		static Fixed &max(Fixed &fp1, Fixed &fp2);
		static const Fixed &max(Fixed const &fp1, Fixed const &fp2);
		

};

std::ostream &operator << (std::ostream &out, Fixed const &src);

#endif

// the journey of thousand miles begins with step
// practice makes perfect
// don't watch the clock , just do what it dose , keep going