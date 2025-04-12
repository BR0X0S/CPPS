/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:15:24 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/12 18:09:26 by oumondad         ###   ########.fr       */
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

Zombie* zombieHorde( int N, std::string name );

#endif