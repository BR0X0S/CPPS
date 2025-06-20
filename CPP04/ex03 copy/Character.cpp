/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:25:12 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/15 18:58:17 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

GCollector CallDestructor;
GCollector *head = NULL;


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
	for (int i = 0; i < 4; i++)
	{
		if (Spell[i])
			delete Spell[i];
		Spell[i] = NULL;
	}
	std::cout << "Character Name " << name << " Destructor Called! " << std::endl;
}

void Character::equip(AMateria* m)
{
	int x = 0;
	if (!m)
	{
		std::cout << "Invalid Materia!" << std::endl;
		return ;
	}
	while (x < 4)
	{
		if (Spell[x] == NULL)
		{
			Spell[x] = m;
			std::cout << "Character Name " << name << " Equped a " << m->getType() << " Materia" << std::endl;
			return ;
		}
		x++;
	}
	std::cout << "Character Name " << name << " has full Materia slots!" << std::endl;
	// Drop on the floor;
	Collect_materia(m);
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4 || !Spell[idx])
		return ;
	// Drop on the floor;
	Collect_materia(Spell[idx]);
	Spell[idx] = NULL;
	std::cout << "Character Name " << name << " Unequipped its Materia " << std::endl;
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
