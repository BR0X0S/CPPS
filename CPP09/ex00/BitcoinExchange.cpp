/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:17:24 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/22 20:21:04 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <algorithm>

Btc::Btc(std::string inputFile)
{
	fillData();
	parceInput(inputFile);
}

Btc::Btc(const Btc& obj)
{
	data = obj.data;
}

Btc& Btc::operator=(const Btc& obj)
{
	if (this != &obj)
		data = obj.data;
	return (*this);
}

Btc::~Btc(){}

void Btc::fillData()
{
	std::ifstream dataFile("data.csv");
	if (!dataFile.is_open())
		throw std::runtime_error("Error: could not open data.csv file.");
	std::string line;
	std::string date;
	std::string value;
	getline(dataFile, line);
	while (getline(dataFile, line))
	{
		size_t pos = line.find(',');
		if (pos == std::string::npos)
			throw std::runtime_error("data.csv Error : data malformed");	
		date = line.substr(0, pos);
		value = line.substr(pos + 1);
		data[date] = atof(value.c_str());
	}
}

void Btc::parceInput(const std::string inputFile)
{
	std::ifstream File(inputFile.c_str());
	if (!File.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}
	std::string line;
	std::string date;
	std::string value;

	getline(File, line);
	while(getline(File, line))
	{
		try
		{
			size_t pos = line.find('|');
			if (pos == std::string::npos)
				throw std::runtime_error("Error: bad input => " + line);

			value = line.substr(pos + 2);
			date = line.substr(0, pos - 1);
			double nbr = checkData(date, value);
			if (data.empty())
				throw std::runtime_error("Error: data.csv is empty");
			std::map<std::string, float>::iterator it = data.lower_bound(date);
			if (it != data.begin() && (it == data.end() || it->first != date))
    			it--;
			std::cout<< date << " => " << value << " = " << nbr * (it->second) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

bool parceDate(std::string date)
{
	if (date[4] != '-' || date[7] != '-' || date.length() != 10)
		return (false);
	std::string month = date.substr(5, 2);
	std::string day = date.substr(8, 2);
	int imonth = atoi(month.c_str());
	int iday = atoi(day.c_str());
	if ((imonth <= 0 || imonth > 12) || (iday <= 0 || iday > 31))
		return false;
	if ((imonth == 2 && iday > 29))
		return false;
	return true;
}

double	Btc::checkData(std::string date, std::string value)
{
	if (!parceDate(date))
		throw std::runtime_error("Error: invalid date => " + date);
	double nbr = std::atof(value.c_str());
	size_t pos = value.find(".");
	if (nbr == 1000 && pos != std::string::npos)
	{
		std::string val = value.substr(pos + 1);
		if (val.find_first_not_of("0"))
			nbr = 1001;
	}
	if (nbr > 1000)
		throw std::runtime_error("Error: too large a number.");
	if (nbr < 0)
		throw std::runtime_error("Error: not a positive number.");
	return (nbr);
}
