/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:43:05 by oumondad          #+#    #+#             */
/*   Updated: 2025/12/08 22:21:50 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

    std::cout << "DEBUG: Large elements after sort: ";
	for(size_t i = 0; i < bigNumbers.size(); i++)
		std::cout << bigNumbers[i] << " ";
	std::cout << std::endl;

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
   std::cout << "DEBUG: Small elements after sort: ";
	for(size_t i = 0; i < smallNumbers.size(); i++)
		std::cout << smallNumbers[i] << " ";
	std::cout << std::endl;
    std::cout << "lba9i = " << x << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
    
}
