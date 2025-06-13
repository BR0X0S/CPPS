/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:34:57 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/13 19:46:04 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
	
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
	*this = obj;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &obj)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
		{
			delete materias[i];
			materias[i] = NULL;	
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (obj.materias[i])
			materias[i] = obj.materias[i]->clone();
		else
			materias[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
		{
			delete materias[i];
			materias[i] = NULL;	
		}
	}
	std::cout << "MateriaSource Destructor Called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] == NULL && mat)
			materias[i] = mat->clone();
		return ;
	}
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	std::cout << "your Materia Tyep :" << type << "dose't found" << std::endl;
	return (0);
}
