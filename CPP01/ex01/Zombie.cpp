/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:15:12 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/12 18:16:20 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string str)
{
	name = str;
}

Zombie::~Zombie()
{
	std::cout << name << "is destroyd" << std::endl;
}

Zombie*	zombieHorde( int N, std::string name )
{
	if (N <= 0)
		NULL;
	Zombie *zmb = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zmb[i].SetName(name);
	}
	return (zmb);
}
