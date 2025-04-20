/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:53:21 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/19 18:12:06 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
	private :

		std::string name;
		Weapon *wpn;

	public :

		HumanB();
		HumanB(std::string Name);
		void attack() const;
		void setWeapon(Weapon &club);
};

#endif