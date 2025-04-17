/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:53:25 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/17 20:47:08 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"


class HumanA
{
	private :

		std::string name;
		Weapon wpn;

	public :

		HumanA();
		HumanA(std::string Name, Weapon &wp);
		void attack() const;
};



#endif