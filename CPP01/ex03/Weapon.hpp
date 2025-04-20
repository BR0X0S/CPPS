/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:02:32 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/20 16:47:40 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private :

		std::string type;

	public :

		Weapon();
		Weapon(std::string Type);
		~Weapon();
		const std::string& getType() const;
		void setType(std::string new_type);

};

#endif