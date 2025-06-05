/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:58:33 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/05 16:45:53 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{	
	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		ScavTrap &operator = (const ScavTrap &obj);
		~ScavTrap();

		void	attack(const std::string &target);
		void	guardGate();

};

#endif