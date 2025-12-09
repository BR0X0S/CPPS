/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:32:08 by oumondad          #+#    #+#             */
/*   Updated: 2025/12/09 22:47:30 by oumondad         ###   ########.fr       */
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
	

	// for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	// 	std::cout << *it << ' ';
}



// std::vector<int> PmergeMe::_jacobsthalSequence(size_t num)
// { // J(n) = J(n-1) + 2 * J(n-2)
// 	std::vector<int> jacobsthal;
// 	jacobsthal.push_back(0);
// 	jacobsthal.push_back(1);
// 	for(size_t i = 2; i <= num; i++){
// 		size_t next = jacobsthal[i - 1] + 2 * jacobsthal[i - 2];
// 		if (next >= num)
// 			break;
// 		jacobsthal.push_back(next);
// 	}
// 	return jacobsthal;
// }

// std::vector<int> PmergeMe::_insertionSequence(size_t num)
// {
// 	std::vector<int> insertionSeq;
// 	std::vector<int> jacobsthal = _jacobsthalSequence(num);

// 	int lastJacobIndex = 1;
// 	for(size_t i = 3; i < jacobsthal.size(); i++){
// 		int currJacobIndex = jacobsthal[i];
// 		for (int j = currJacobIndex; j > lastJacobIndex; j--)
// 			insertionSeq.push_back(j);
// 		lastJacobIndex = currJacobIndex;
// 	}
// 	for(int i = num; i > lastJacobIndex; i--)
// 		insertionSeq.push_back(i);

// 	return insertionSeq;
// }