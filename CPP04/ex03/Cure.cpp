/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:36:51 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/15 20:28:37 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "Cure Class Default Constructor Called! " << std::endl;
}

Cure::Cure(const Cure &obj)
{
	*this = obj;
}

Cure &Cure::operator = (const Cure &obj)
{
	if (this != &obj)
	{
		Type = obj.Type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Class Destructor Called! " << std::endl;
}

AMateria *Cure::clone() const
{return (new Cure);}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
