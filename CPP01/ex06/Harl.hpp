/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:03:08 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/24 18:12:15 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private :
		
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		
	public :
	
		void complain( std::string level );
};

#endif