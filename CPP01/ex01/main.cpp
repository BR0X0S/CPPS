/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:14:35 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/12 18:15:28 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int zn = 10;
	Zombie *zmbs = zombieHorde(zn, "missi");
	for (int i = 0; i < zn; i++)
	{
		zmbs[i].announce();
	}
	delete[] zmbs;
}
