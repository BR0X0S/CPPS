/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:30:51 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/02 21:53:10 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("Wall-E"), HP(10), EP(10), AD(0), MHP(HP)
{}

ClapTrap::ClapTrap(std::string name): Name(name), HP(10), EP(10), AD(0), MHP(HP)
{}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
{
	if(this != &obj)
	{
		Name = obj.Name;
		HP = obj.HP;
		EP = obj.EP;
		AD = obj.AD;
		MHP = obj.MHP;
	}
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{*this = obj;}

ClapTrap::~ClapTrap()
{}

void ClapTrap::attack(const std::string &target)
{
	if (HP < 1)
		std::cout << "ClapTrap " << Name << " Can't attack because it has no HP!" << std::endl;
	else if (EP < 1)
		std::cout << "ClapTrap " << Name << " Can't attack because it has no EP!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AD << " points of damage!" << std::endl;
		EP--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HP < 1)
		std::cout << "ClapTrap " << Name << " has no HP!" << std::endl;
	else
	{
		if (HP >= amount)
			HP -= amount;
		else
			HP = 0;
		std::cout << "ClapTrap " << Name << " takes "<< amount << " of Damage, leaving it with " << HP << " HP!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HP < 1)
		std::cout << "ClapTrap " << Name << " Can't be healed because it has no HP!" << std::endl;
	else if (EP < 1)
		std::cout << "ClapTrap " << Name << " Can't be healed because it has no EP!" << std::endl;
	else
	{
		if ((amount + HP) > MHP)
			HP = MHP;
		else
			HP += amount;
		std::cout << "ClapTrap " << Name << " heals itself for " << amount << ". It now has " << HP << " HP!" << std::endl;
		EP--;
	}
}
