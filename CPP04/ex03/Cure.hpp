/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:37:02 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/11 20:19:21 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure: public AMateria
{
	private:

		std::string name;

	public:

		Cure();
		Cure(const Cure &obj);
		Cure &operator = (const Cure &obj);
		~Cure();

		AMateria	*clone() const;
		void		use(ICharacter& target);
		
};

#endif