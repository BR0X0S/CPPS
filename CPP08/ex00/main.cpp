/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:40:40 by oumondad          #+#    #+#             */
/*   Updated: 2025/10/26 19:16:12 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "MutantStack.hpp"

int main()
{
	std::vector<int> vec;
	
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);

	std::vector<int>::iterator it = easyfind(vec, 5);
	if (it != vec.end())
		std::cout << "Found : " << *it << std::endl;
	else
		std::cout << "Didn't found the target " <<  std::endl;
	const std::vector<int> cVec(vec);

	std::vector<int>::const_iterator cit = easyfind(cVec, 1);
	if (*cit)
		std::cout << "Found : " << *cit << " in const vector" << std::endl;
	else
		std::cout << "Didn't found the target in const vector" << std::endl;
	
}
