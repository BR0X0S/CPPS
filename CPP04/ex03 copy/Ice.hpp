/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 18:36:41 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/13 16:37:09 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class	Ice: public AMateria
{
	public:
		
		Ice();
		Ice(const Ice &obj);
		Ice &operator = (const Ice &obj);
		~Ice();

		AMateria	*clone() const;
		void		use(ICharacter& target);

};

#endif