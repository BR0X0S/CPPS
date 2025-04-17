/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:53:17 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/17 20:48:20 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("ADAM")
{}

HumanB::HumanB(std::string Name) : name(Name)
{}

void	HumanB::attack() const
{
	std::cout << name << "attacks with their " << wpn.getType() << std::endl;
}
