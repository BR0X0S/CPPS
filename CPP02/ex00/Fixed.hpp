/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:24 by oumondad          #+#    #+#             */
/*   Updated: 2025/05/22 20:48:35 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

	private :

		int					fixed_value;
		static const int	nofb;
	
	public :
		
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator = (const Fixed &src);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );

};

#endif