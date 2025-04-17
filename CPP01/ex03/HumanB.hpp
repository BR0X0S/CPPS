/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:53:21 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/17 20:47:53 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
	private :

		std::string name;
		Weapon wpn;

	public :

		HumanB();
		HumanB(std::string Name);
		void attack() const;
};

#endif