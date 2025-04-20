/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:53:17 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/19 18:38:48 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("ADAM"), wpn(NULL)
{}

HumanB::HumanB(std::string Name) : name(Name), wpn(NULL)
{}

void	HumanB::attack() const
{
	if (!wpn)
	{
		std::cout << name << " attacks with their Hands" << std::endl;
		return ;
	}
	std::cout << name << " attacks with their " << wpn->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	wpn = &club;
}
