/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:44:11 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/17 19:38:12 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("hands")
{}

Weapon::Weapon(std::string Type) : type(Type)
{
    
}


Weapon::~Weapon()
{
    
}

const std::string& Weapon::getType(void) const
{
	return (type);
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}
