/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:59:46 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/05 18:29:42 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Eve")
{
	HP = 100;
	EP = 50;
	AD = 20;
	MHP = HP;
	std::cout << "ScavTrap " << Name << " Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	HP = 100;
	EP = 50;
	AD = 20;
	MHP = HP;
	std::cout << "ScavTrap " << Name << " Name Constructor Called" << std::endl;	
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj)
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

ScavTrap::ScavTrap(const ScavTrap &obj)
{*this = obj;}

ScavTrap::~ScavTrap()
{	
	std::cout << "ScavTrap " << Name << " Destructor Called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (HP < 1)
		std::cout << "ScavTrap " << Name << " Can't attack because it has no HP!" << std::endl;
	else if (EP < 1)
		std::cout << "ScavTrap " << Name << " Can't attack because it has no EP!" << std::endl;
	else
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AD << " points of damage!" << std::endl;
		EP--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}
