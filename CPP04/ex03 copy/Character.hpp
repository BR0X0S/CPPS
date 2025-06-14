/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 20:26:11 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/14 17:12:08 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class	Character: public ICharacter
{
	private:

		std::string	name;
		AMateria	*Spell[4];

	public:

		Character();
		Character(std::string Name);
		Character(const Character &obj);
		Character &operator = (const Character &obj);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

};

#endif