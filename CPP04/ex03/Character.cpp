/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:25:12 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/15 22:03:58 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const& Character::getName() const
{
	return (name);
}

Character::Character(std::string Name): name(Name)
{
	for (int i = 0; i < 4; i++)
		Spell[i] = NULL;
	std::cout << "Character Name " << name << " Name Constructor Called! " << std::endl;
}

Character::Character(): name("Adam")
{
	for (int i = 0; i < 4; i++)
		Spell[i] = NULL;
	std::cout << "Character Name " << name << " Default Constructor Called! " << std::endl;
}

Character::Character(const Character &obj)
{
	for (int i = 0; i < 4; i++)
		Spell[i] = NULL;
	*this = obj;
}

Character &Character::operator = (const Character &obj)
{
	std::cout << "Character Name " << name << " Copy assignment Called! " << std::endl;
	
	if (this != &obj)
	{
		name = obj.name;
		for (int i = 0; i < 4; i++)
		{
			if (Spell[i] != NULL)
			{
				delete Spell[i];
				Spell[i] = NULL;
			}
		}
		for (int i = 0; i < 4; i++)
		{
			if (obj.Spell[i])
				Spell[i] = obj.Spell[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character Name " << name << " Destructor Called! " << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (Spell[i])
			delete Spell[i];
		Spell[i] = NULL;
	}
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Invalid Materia!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (Spell[i] == NULL)
		{
			Spell[i] = m;
			std::cout << "Character Name " << name << " Equped a " << m->getType() << " Materia" << std::endl;
			return ;
		}
	}
	std::cout << "Character Name " << name << " has full Materia slots!" << std::endl;
	Collect_materia(m);
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4 || !Spell[idx])
		return ;
	std::cout << "Character Name " << name << " Unequipped its Materia " << std::endl;
	Collect_materia(Spell[idx]);
	Spell[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < 4) && Spell[idx])
	{
		Spell[idx]->use(target);
		return ;
	}
	std::cout << "* Can't Attak " << target.getName() << " Bcz Non Materia Equiped *" << std::endl;
}
