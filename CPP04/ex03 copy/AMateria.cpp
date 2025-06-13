/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:19:56 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/13 16:34:49 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): Type(type)
{}

AMateria::AMateria(): Type("Fart")
{}

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
{}

std::string const &AMateria::getType() const
{
	return (Type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	std::cout << " AMateria can't use a Material! " << std::endl;
}
