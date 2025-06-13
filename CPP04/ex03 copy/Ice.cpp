/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:36:30 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/12 20:23:18 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Ice Class Default Constructor Called! " << std::endl;
}

Ice::Ice(const Ice &obj)
{
	*this = obj;
}

Ice &Ice::operator = (const Ice &obj)
{
	if (this != &obj)
	{
		Type = obj.Type;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Class Destructor Called! " << std::endl;
}


AMateria *Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
