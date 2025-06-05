/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:48:06 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/05 19:04:32 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Eve")
{
	HP = 100;
	EP = 100;
	AD = 30;
	MHP = HP;
	std::cout << "FragTrap " << Name << " Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	HP = 100;
	EP = 100;
	AD = 30;
	MHP = HP;
	std::cout << "FragTrap " << Name << " Name Constructor Called" << std::endl;	
}

FragTrap &FragTrap::operator = (const FragTrap &obj)
{
	if (this != &obj)
	{
		Name = obj.Name;
		HP = obj.HP;
		EP = obj.EP;
		AD = obj.AD;
		MHP = obj.MHP;
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap &obj)
{*this = obj;}

FragTrap::~FragTrap()
{	
	std::cout << "FragTrap " << Name << " Destructor Called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << Name << ": \"Give me FIVE!!!\"" << std::endl;
}
