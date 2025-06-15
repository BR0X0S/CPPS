/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:19:47 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/15 20:19:46 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class	AMateria
{
	protected:
	
		std::string Type;
		
	public:

		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria &obj);
		AMateria &operator = (const AMateria &obj);
		virtual ~AMateria();

		std::string const &getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif