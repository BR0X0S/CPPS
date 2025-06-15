/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 16:35:07 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/13 18:59:10 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource: public IMateriaSource
{
	private:

		AMateria    *materias[4];

	public:

		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource &operator = (const MateriaSource &obj);
		~MateriaSource();

		void learnMateria(AMateria* mat);
		AMateria *createMateria(std::string const & type);
	
};

#endif