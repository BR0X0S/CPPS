/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:32:08 by oumondad          #+#    #+#             */
/*   Updated: 2025/12/10 19:38:50 by oumondad         ###   ########.fr       */
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


// template <typename T>
// static void checkSorted(const T& cont){
// 	for(size_t i = 1; i < cont.size(); i++){
// 		if (cont[i] < cont[i - 1]){
// 			std::cerr << "Error: Container is not sorted!" << std::endl;
// 			return;
// 		}
// 	}
// 	std::cout << "Container is sorted." << std::endl;
// }

int main(int ac, char **av)
{
	
	if (ac < 2)
	{
		std::cerr << "Error: Not enough arguments." << std::endl;
		return 1;
	}
	PmergeMe algo;
	std::vector<int> vec;
	std::deque<int> deque;
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
			std::cerr << "Error: Wrong argument." << std::endl;
			return 1;
		}
		vec.push_back(nbr);
		deque.push_back(nbr);
	}
	
	std::cout << "Before:	";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	
	clock_t start = clock();
	algo.sortVector(vec);
	clock_t end = clock();
	double vecTime = double(end - start) * 1e6 / CLOCKS_PER_SEC;


	start = clock();
	algo.sortDeque(deque);
	end = clock();
	double deqTime = double(end - start) * 1e6 / CLOCKS_PER_SEC;


	// struct timeval start, end;


	// gettimeofday(&start, NULL);
	// algo.sortVector(vec);
	// gettimeofday(&end, NULL);
	// long seconds_vec = end.tv_sec - start.tv_sec;
	// long micro_vec = end.tv_usec - start.tv_usec;
	// double vecTime = seconds_vec * 1000000 + micro_vec;



	// gettimeofday(&start, NULL);
	// algo.sortDeque(deque);
	// gettimeofday(&end, NULL);
	// long seconds_deq = end.tv_sec - start.tv_sec;
	// long micro_deq = end.tv_usec - start.tv_usec;
	// double deqTime = seconds_deq * 1000000 + micro_deq;

	// checkSorted(vec);
	// checkSorted(deque);

	std::cout << "After:	";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << " elements with std::deque : " << deqTime << " us" << std::endl;
}
