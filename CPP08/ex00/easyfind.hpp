/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 22:41:58 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/01 22:33:07 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &con, int i)
{
	return (std::find(con.begin(), con.end(), i));
}

template <typename T>
typename T::const_iterator easyfind(const T &con, int i)
{
	return(std::find(con.begin(), con.end(), i));
}

#endif