/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:28:31 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/28 23:40:02 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

char		ScalarConverte::_char;
int			ScalarConverte::_int;
float		ScalarConverte::_float;
double		ScalarConverte::_double;


	void ScalarConverte::printChar(double nbr)
{
	if (nbr > CHAR_MAX || nbr < CHAR_MIN || std::isnan(nbr))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	_char = static_cast<char>(nbr);
	if (isprint(_char))
		std::cout << "char: '" << _char << "'" << std::endl;
	else
		std::cout << "char: Non displayable" <<std::endl;
}

void ScalarConverte::printInt(double nbr)
{
	if (nbr > INT_MAX || nbr < INT_MIN || std::isnan(nbr))
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	else
	{
		_int = static_cast<int>(nbr);
		std::cout << "int: " << _int << std::endl;
	}
}

void ScalarConverte::printFloat(double nbr)
{
	double	point;
	_float = static_cast<float>(nbr);
	std::cout << "float: " << _float;
	if (modf(nbr, &point) == 0.0 && !std::isinf(_float))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void ScalarConverte::printDouble(double nbr)
{
	double point;
	_double = static_cast<double>(nbr);
	std::cout << "double: " << _double;
	if (modf(nbr, &point) == 0.0 && !std::isinf(_float))
		std::cout << ".0";
	std::cout << std::endl;
}

void	check(char x, bool &dot)
{
	if (x == '.')
	{
		if (dot)
			throw std::runtime_error("invalid");
		dot = true;
	}
	else if ((x != 'f' && !isdigit(x)) || !isprint(x))
		throw std::runtime_error("invalid");
}

void	ScalarConverte::cast(const std::string &input, bool flag)
{
	double	nbr;
	bool	dot = false;
	bool	digit = false;

	std::istringstream iss(input);

	if (!flag)
		nbr = atof(input.c_str());
	else
	{
		int i = 0;
		if (input[0] == '-' || input[0] == '+')
			i++;
		for (; input[i]; i++)
		{
			check(input[i], dot);
			if (input[i] == 'f' && (input[i + 1] || !dot))
				throw std::runtime_error("invalid");
			if (isdigit(input[i]))
				digit = true;
		}
		if (!digit)
			throw std::runtime_error("invalid");
		iss >> nbr;
	}
	std::cout << "converter called" << std::endl;
	printChar(nbr);
	printInt(nbr);
	printFloat(nbr);
	printDouble(nbr);
}

void	ScalarConverte::convert(const std::string &input)
{
	if (input == "+inff" || input == "+inf" || input == "nanf" || input == "inf" 
		|| input == "nan" || input == "-inff" || input == "-inf" || input == "inff")
		cast(input, false);
	else if (input.length() > 1 || isdigit(input[0]) || !isprint(input[0]))
		cast(input, true);
	else
	{
		std::cout << "char: '" << static_cast<char>(input[0]) << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
}
