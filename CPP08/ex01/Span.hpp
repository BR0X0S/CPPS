/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:56:47 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/01 22:16:46 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
	private:

		unsigned int max;
		std::multiset<int> n;
		Span();

	public:

		Span(int nbr);
		Span(const Span &obj);
		Span &operator = (const Span &obj);
		void	addNumber(unsigned int nbr);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void	addRange(std::multiset<int>::iterator begin, std::multiset<int>::iterator end);
		~Span();
};


#endif