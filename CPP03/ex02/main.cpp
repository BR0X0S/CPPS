/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:06 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/05 19:10:41 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap test;
	test.attack("messi");
	FragTrap test2("messi");
	test = test2;
	test.takeDamage(12);
	test.beRepaired(25);
	test.attack("hamid");
	test.highFivesGuys();
}
