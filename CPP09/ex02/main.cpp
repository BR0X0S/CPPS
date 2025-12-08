/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:32:08 by oumondad          #+#    #+#             */
/*   Updated: 2025/12/08 22:05:35 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


bool	checkInput(char *input)
{
	for(int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}


int main(int ac, char **av)
{
	
	if (ac < 2)
	{
		std::cerr << "Error: Not enough arguments." << std::endl;
		return 1;
	}
	PmergeMe algo;
	std::vector<int> vec;
	long nbr;

	for (int i = 1; i < ac; i++)
	{
		if(!checkInput(av[i]))
		{
			std::cerr << "Error: Wrong argument." << std::endl;
			return 1;
		}
		std::stringstream ss(av[i]);
		
		if (!(ss >> nbr) || nbr > INT_MAX) ////////////
		{
			std::cerr << "Error: Wrong argument. 3" << std::endl;
			return 1;
		}
		vec.push_back(nbr);
	}
	
	algo.sortVector(vec);
	

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << ' ';
}
