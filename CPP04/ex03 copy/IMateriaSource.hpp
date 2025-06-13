/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:30:02 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/13 18:54:04 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class IMateriaSource
{
	public:

	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

// class	IMateriaSource
// {
// 	public:

// 		virtual ~IMateriaSource() {}
// 		virtual void learnMateria(AMateria *Mat) = 0;
// 		virtual AMateria *createMateria(std::string Mname) = 0;
	
// };

#endif