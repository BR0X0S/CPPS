/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:49:03 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/28 21:42:34 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

int main(int ac, char **av)
{
	if (ac != 2 || !av[1][0])
	{
		std::cerr << "Usage: ./scalar <value>" << std::endl;
		return 1;
	}
	try
	{
		// std::istringstream iss(av[1]);
		// std::cout << iss.str() << std::endl;
		// double nbr, nbr2;
		// iss >> nbr;
		// nbr2 = atof(av[1]);
		// std::cout << nbr << std::endl;
		// std::cout << "atof: " << nbr2 << std::endl;
		// // double point;
		// // std::cout << "mod :" << modf(nbr, &point) << std::endl;
		ScalarConverte::convert(av[1]);
		std::cout << "Conversion successful" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
	