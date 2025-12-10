/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:43:05 by oumondad          #+#    #+#             */
/*   Updated: 2025/12/10 18:40:42 by oumondad         ###   ########.fr       */
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
	for (size_t i = 3; i < nbrs.size(); i++)
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
	std::vector<int> insertPose = insertPlace(smallNumbers.size());
	for (size_t i = 0; i < insertPose.size(); i++)
	{
		int pose = insertPose[i];
		int nbrToInsert = smallNumbers[pose - 1];
		std::vector<int>::iterator it =  std::lower_bound(bigNumbers.begin(), bigNumbers.end(), nbrToInsert);
		bigNumbers.insert(it, nbrToInsert);
	}
	if (x != -1)
	{
		std::vector<int>::iterator it =  std::lower_bound(bigNumbers.begin(), bigNumbers.end(), x);
		bigNumbers.insert(it, x);
	}
	vec = bigNumbers;
}


void	PmergeMe::sortDeque(std::deque<int> &deque)
{
	if (deque.size() <= 1)
		return ;

	int x = -1;
	std::deque<std::pair<int, int> > pairs;
	std::deque<int> bigNumbers;
	std::deque<int> smallNumbers;

	if (deque.size() % 2 != 0)
	{
		x = deque.back();
		deque.pop_back();
	}
	for(int i = 0; i < (int)deque.size(); i += 2)
	{
		if (deque[i] < deque[i + 1])
			pairs.push_back(std::pair<int, int>(deque[i], deque[i + 1]));
		else
			pairs.push_back(std::pair<int, int>(deque[i + 1], deque[i]));
	}
	for(int i = 0; i < (int)pairs.size(); i++)
		bigNumbers.push_back(pairs[i].second);
	sortDeque(bigNumbers);
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
	std::vector<int> insertPose = insertPlace(smallNumbers.size());
	for (size_t i = 0; i < insertPose.size(); i++)
	{
		int pose = insertPose[i];
		int nbrToInsert = smallNumbers[pose - 1];
		std::deque<int>::iterator it =  std::lower_bound(bigNumbers.begin(), bigNumbers.end(), nbrToInsert);
		bigNumbers.insert(it, nbrToInsert);
	}

	if (x != -1)
	{
		std::deque<int>::iterator it =  std::lower_bound(bigNumbers.begin(), bigNumbers.end(), x);
		bigNumbers.insert(it, x);
	}
	deque = bigNumbers;
}
