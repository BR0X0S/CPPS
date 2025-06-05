/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:06 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/05 19:21:08 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Robo("Ta_Mere");

	Robo.attack("Ta_Tante");
	Robo.takeDamage(9);
	Robo.beRepaired(20);
	Robo.takeDamage(11);
	Robo.beRepaired(20);
}
