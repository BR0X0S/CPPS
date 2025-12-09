/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:43:05 by oumondad          #+#    #+#             */
/*   Updated: 2025/12/09 22:56:24 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


std::vector<int> PmergeMe::jecobNbrGen(int max)
{
	// J(n) = J(n-1) + 2 * J(n-2)
	std::vector<int> nbrs;
	nbrs.push_back(0);
	nbrs.push_back(1);
	for (int i = 2; i <= max; i++)
	{
		size_t nbr = nbrs[i - 1] + 2 * nbrs[i - 2];
		if ((int)nbr >= max)
			break;
		nbrs.push_back(nbr);
	}
	return (nbrs);
}

std::vector<int> PmergeMe::insertPlace(int max)
{
	std::vector<int> insertPose;
	std::vector<int> nbrs = jecobNbrGen(max);

	int lastIndex = 1;
	for (size_t i = 3; i < nbrs.size(); i++) // 5 --> 5 2 6 7 1 // i = 3 -> curr = 3 // 1, 3, 5, 11, 21, 43, 85, 171, 341, 683, 1365, 2731, 5461, 10923, 21845
	{
		int currIndex = nbrs[i];
		for (int j = currIndex; j > lastIndex; j--)
		{
			insertPose.push_back(j);
		}
		lastIndex = currIndex;
	}
	for(int i = max; i > lastIndex; i--)
	{
		insertPose.push_back(i);
	}

	return (insertPose);
}

void PmergeMe::sortVector(std::vector<int> &vec)
{
	if (vec.size() <= 1)
		return ;

	int x = -1;
	std::vector<std::pair<int, int> > pairs;
	std::vector<int> bigNumbers;
	std::vector<int> smallNumbers;

	if (vec.size() % 2 != 0)
	{
		x = vec.back();
		vec.pop_back();
	}    
	for(int i = 0; i < (int)vec.size(); i += 2)
	{
		if (vec[i] < vec[i + 1])
			pairs.push_back(std::pair<int, int>(vec[i], vec[i + 1]));
		else
			pairs.push_back(std::pair<int, int>(vec[i + 1], vec[i]));
	}
	
	for(int i = 0; i < (int)pairs.size(); i++)
		bigNumbers.push_back(pairs[i].second);
	sortVector(bigNumbers);

		// std::cout << "DEBUG: Large elements after sort: ";
		// for(size_t i = 0; i < bigNumbers.size(); i++)
		// 	std::cout << bigNumbers[i] << " ";
		// std::cout << std::endl;

	for (int i = 0; i < (int)bigNumbers.size(); i++)
	{
		for(int j = 0; j < (int)pairs.size(); j++)
		{
			if (bigNumbers[i] == pairs[j].second)
			{
				smallNumbers.push_back(pairs[j].first);
				break;
			}
		}
	}
	bigNumbers.insert(bigNumbers.begin(), smallNumbers[0]);
	

	std::cout << "DEBUG: Small elements after sort: ";
	for(size_t i = 0; i < smallNumbers.size(); i++)
		std::cout << smallNumbers[i] << " ";
	std::cout << std::endl;
	
	std::cout << "DEBUG: Large elements after sort: ";
	for(size_t i = 0; i < bigNumbers.size(); i++)
		std::cout << bigNumbers[i] << " ";
	std::cout << std::endl;
	std::cout << "lba9i = " << x << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	

	std::vector<int> insertPose = insertPlace(smallNumbers.size());
	for (std::vector<int>::iterator it = insertPose.begin(); it != insertPose.end(); it++)
		std::cout << *it << " | ";


}
