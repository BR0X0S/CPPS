/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:28:28 by oumondad          #+#    #+#             */
/*   Updated: 2025/09/16 16:59:59 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename func>
void iter(T *array, size_t length, func(T &x))
{
	for (size_t i = 0; i < length; ++i)
	{
		func(array[i]);
	}
}

#endif