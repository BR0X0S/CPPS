/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:17:24 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/20 23:43:07 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc(std::string inputFile)
{
	fillData();
	parceInput(inputFile);
}

// Btc::Btc()
// {
// 	fillData();
// }


Btc::~Btc()
{
}

void Btc::fillData()
{
	std::ifstream dataFile("data.csv");
	if (!dataFile.is_open())
	{
		std::cerr << "Error: could not open data.csv file." << std::endl;
		return ;
	}
	std::string line;
	std::string date;
	std::string value;
	while (std::getline(dataFile, line))
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
	std::ifstream File(inputFile);
	if (!File.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}
	std::string line;
	std::string date;
	std::string value;

	while(getline(File, line))
	{
		try
		{
			size_t pos = line.find('|');
			if (pos == std::string::npos)
				throw std::runtime_error("Error : invalid syntax");

			value = line.substr(pos + 1);
			date = line.substr(0, pos);
			checkData(date, value);

			// input[date] = atof(value.c_str());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	
}


double	Btc::checkData(std::string date, std::string value)
{
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
}


