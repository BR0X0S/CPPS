/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 17:48:05 by oumondad          #+#    #+#             */
/*   Updated: 2025/09/08 21:21:46 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:

		T				*arr;
		unsigned int	_size;
	
	public:

		Array();
		Array(unsigned int n);
		Array(const Array &obj);
		~Array();
		Array &operator = (const Array &obj);
		T &operator [] (unsigned int n);
		unsigned int	size() const;

};

#include "Array.tpp"

#endif