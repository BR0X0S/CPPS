/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:14:35 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/17 17:41:07 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int zn = 10;
	Zombie *zmbs = zombieHorde(zn, "missi");

	std::cout << "Announcing 1st Zombie: ";
	zmbs->announce();
	for (int i = 0; i < zn; i++)
	{
		zmbs[i].announce();
	}
	delete[] zmbs;
}
