/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:02:46 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/24 19:44:51 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special";
	std::cout << "-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't putenough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming foryears whereas ";
	std::cout << "you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "" << std::endl;
	std::cout << "This is unacceptable! I want to speak";
	std::cout << " to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string cmds[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && cmds[i] != level)
		i++;
	i++;
	switch (i)
	{
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
