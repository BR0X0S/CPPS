/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:32:00 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/28 21:37:56 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTE_HPP
#define SCALARCONVERTE_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <limits.h>
#include <cmath>

class ScalarConverte
{
	private:

		static char		_char;
		static int		_int;
		static float	_float;
		static double	_double;
		static int		_sign;
		ScalarConverte();

	public:

		static void convert(const std::string &input);
		static void	cast(const std::string &input, bool flag);
		static void printChar(double nbr);
		static void printInt(double nbr);
		static void printFloat(double nbr);
		static void printDouble(double nbr);

};

#endif