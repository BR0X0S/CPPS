/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:56:44 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/01 22:18:28 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits.h>

Span::Span(int nbr): max(nbr) {}
Span::Span(const Span &obj) { *this = obj;}
Span::~Span() {}

Span &Span::operator = (const Span &obj)
{
	if (this != &obj)
	{
		max = obj.max;
		n = obj.n;
	}
	return (*this);
}

void Span::addNumber(unsigned int nbr)
{
	if (n.size() >= max)
		throw std::out_of_range ("You can't add numbers, Container is full");
	n.insert(nbr);
}

unsigned int Span::shortestSpan()
{
	if (n.empty() || n.size() < 2)
		throw std::runtime_error("Error : you need at least 2 numbers");
	std::multiset<int>::iterator it = n.begin();
	unsigned int x = *it;
	it++;
	unsigned int tmp = *it - x;
	while (it != n.end())
	{
		if (*it - x < tmp)
			tmp = *it - x;
		x = *it;
		it++;
	}
	return (tmp);
}

unsigned int Span::longestSpan()
{
	if (n.empty() || n.size() < 2)
		throw std::runtime_error("Error : you need at least 2 numbers");
	std::multiset<int>::iterator it = n.begin();
	unsigned int x = *it;
	it = n.end();
	it--;
	return (*it - x);
}

void	Span::addRange(std::multiset<int>::iterator begin, std::multiset<int>::iterator end)
{
	while(begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}
