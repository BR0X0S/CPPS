/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:30:40 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/12 16:37:00 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	
	public:

		~Zombie(void);
		void announce( void );
		void SetName(std::string str);

	private:

		std::string name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif