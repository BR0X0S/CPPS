/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:43:16 by oumondad          #+#    #+#             */
/*   Updated: 2025/12/10 19:16:25 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <sstream>
#include <limits.h>
#include <sys/time.h>


struct PmergeMe
{
	std::vector<int> jecobNbrGen(int max);
	std::vector<int> insertPlace(int max);
	void sortVector(std::vector<int>& vec);
	void sortDeque(std::deque<int>& deq);
};

#endif