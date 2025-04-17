/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:53:23 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/17 21:18:47 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() : name("EVE")
{}

HumanA::HumanA(std::string Name, Weapon &wp) : name(Name), wpn(wp)
{}

void	HumanA::attack() const
{
	std::cout << name << " attacks with their " << wpn.getType() << std::endl;
}