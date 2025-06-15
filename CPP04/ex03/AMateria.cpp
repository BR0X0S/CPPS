/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:19:56 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/15 21:36:31 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): Type(type)
{
	std::cout << "AMateria Type (" << type << ") Constructor Called " << std::endl;
}

AMateria::AMateria(): Type("Fart")
{
	std::cout << "AMateria Default Constructor Called " << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	*this = obj;
}

AMateria &AMateria::operator = (const AMateria &obj)
{
	if (this != &obj)
	{
		Type = obj.Type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called " << std::endl;
}

std::string const &AMateria::getType() const
{
	return (Type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << " AMateria can't use a Material! " << std::endl;
}
