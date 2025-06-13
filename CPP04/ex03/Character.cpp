/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:25:12 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/12 19:08:07 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const& Character::getName() const
{
    return (name);
}

Character::Character(std::string Name): name(Name)
{}

Character::Character(): name("Adam")
{}

void Character::equip(AMateria* m)
{
    
}

void Character::unequip(int idx)
{
    
}

void Character::use(int idx, ICharacter& target)
{
    
}

