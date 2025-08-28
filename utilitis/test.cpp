#include <iostream>
#include <string>

// float trialculate(Point const &a, Point const &b, Point const &c)
// {
// 	float A = a.getXvalue() * (b.getYvalue() - c.getYvalue());
// 	float B = b.getXvalue() * (c.getYvalue() - a.getYvalue());
// 	float C = c.getXvalue() * (a.getYvalue() - b.getYvalue());

// 	float sum = std::abs(A + B + C);
// 	return (sum / 2);
// }

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	float mainTriangle = trialculate(a, b, c);
// 	float firstTriangle = trialculate(a, b, point);
// 	float seacondTriangle = trialculate(a, point, c);
// 	float therdTriangle = trialculate(point, b, c);

// 	if (firstTriangle == 0 || seacondTriangle == 0 || therdTriangle == 0)
// 		return (false);
// 	if (mainTriangle == (firstTriangle + seacondTriangle + therdTriangle))
// 		return (true);
// 	return (false);
// }

// Fixed trialculate(Point const &a, Point const &b, Point const &c)
// {
// 	Fixed A = a.getXvalue() * (b.getYvalue() - c.getYvalue());
// 	Fixed B = b.getXvalue() * (c.getYvalue() - a.getYvalue());
// 	Fixed C = c.getXvalue() * (a.getYvalue() - b.getYvalue());
// 	Fixed sum =(A + B + C) / 2;

// 	if (sum < 0)
// 		return ((sum * -1));
// 	return (sum);
// }

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed mainTriangle = trialculate(a, b, c);
// 	Fixed firstTriangle = trialculate(a, b, point);
// 	Fixed seacondTriangle = trialculate(a, point, c);
// 	Fixed therdTriangle = trialculate(point, b, c);

// 	if (firstTriangle == 0 || seacondTriangle == 0 || therdTriangle == 0)
// 		return (false);
// 	if (mainTriangle == (firstTriangle + seacondTriangle + therdTriangle))
// 		return (true);
// 	return (false);
// }

// int main(int ac, char **av)
// {
// 	std::string s1 = av[1];
// 	std::string s2 = av[2];
// 	std::string line = "hellow baby yo are the1 bast wan in may layf";
// 	size_t pos = line.find(s1);
// 	if (pos != std::string::npos)
// 	{
		
// 		std::cout << line.erase(pos, s1.length()) << std::endl;
// 		std::cout << line.insert(pos, s2) << std::endl;
// 		return 0;
// 	}
// 	std::cout << -1 << std::endl;
// }


#include "ScalarConverter.hpp"
#include <time.h>
#include <unistd.h>
#include <iomanip>
#include <cstdlib>
#include <cfloat>
#include <cmath>


int		ScalarConverter::i;
float	ScalarConverter::f;
double	ScalarConverter::d;
char	ScalarConverter::c;
int		ScalarConverter::sign = '+';
bool	dote_flag;
bool	digit_flag;

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	*this = obj;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &obj)
{
	if (this == &obj)
		return *this;
	this->i = obj.i;
	this->f = obj.f;
	this->d = obj.d;
	this->c = obj.c;
	this->sign = obj.sign;
	return *this;
}

const char	*ScalarConverter::InvalidException::what() const  throw()
{
	return "InvalidateLiteral";
}

void	ScalarConverter::validateLiteral(char c)
{
	if (!isprint(c) || !is_digit(c))
		throw InvalidException();
	if (c == '.')
	{
		if (dote_flag)
			throw InvalidException();
		dote_flag = true;
	}
}

bool	ScalarConverter::is_digit(char c)
{
	return (isdigit(c) || c == '.' || c == 'f');
}

void	ScalarConverter::parse(std::string	&literal)
{
	if (literal[0] == '+' || literal[0] == '-')
	{
		sign = literal[0];
		literal = (literal.c_str() + 1);
	}
	for(int i = 0; literal[i]; i++)
	{
		validateLiteral(literal[i]);
		if (literal[i] == 'f' && (literal[i + 1] || !dote_flag))
			throw InvalidException();
		if (isdigit(literal[i]))
			digit_flag = true;
	}
	if (!digit_flag && dote_flag)
		throw InvalidException();
	to_cast(literal);
}

void	ScalarConverter::to_cast(std::string &literal)
{
	double tmp = std::atof(literal.c_str())  * (-(sign - 1 - '+'));
	print_char(tmp);
	print_int(tmp);
	print_float(tmp);
	print_double(tmp);
}

void	ScalarConverter::print_int(double dnumber)
{
	if (dnumber > INT_MAX || dnumber < INT_MIN || std::isnan(dnumber))
		std::cout << "int: impossible" << std::endl;
	else
	{
		i = static_cast<int>(dnumber);
		std::cout << "int: " << i << std::endl;
	}
}

void	ScalarConverter::print_char(double dnumber)
{
		if (dnumber > CHAR_MAX || dnumber < CHAR_MIN || std::isnan(dnumber))
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		c = static_cast<char>(dnumber);
		if (isprint(c))
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: Non displayable" <<std::endl;
}

void	ScalarConverter::print_float(double dnumber)
{
	double int_part;
	f = static_cast<float>(dnumber);
	std::cout << "float: " << f;
	if (modf(dnumber, &int_part) == 0.0 && !std::isinf(f))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	ScalarConverter::print_double(double dnumber)
{
	double int_part;
	d = dnumber;
	std::cout << "double: " << d;
	if (modf(dnumber, &int_part) == 0.0 && !std::isinf(f))
		std::cout << ".0";
}

void	ScalarConverter::handle_char(std::string &literal)
{
	f = static_cast<float>(literal[0]);
	c = literal[0];
	d = static_cast<double>(literal[0]);
	i = static_cast<int>(literal[0]);
	std::cout << "char : " << c << std::endl;
	std::cout << "int : " << i << std::endl;
	std::cout << "float : " << f << ".0f" << std::endl;
	std::cout << "double : " << d << ".0" << std::endl;
}


void	ScalarConverter::convert(std::string literal)
{
	if (literal == "nan" || literal == "nanf" || literal == "-inff" ||
		literal == "+inff" || literal == "+inf" || literal == "-inf")
		to_cast(literal);
	else if (literal.length() > 1 || isdigit(literal[0]) || !isprint(literal[0]))
		parse(literal);
	else
		handle_char(literal);

}
