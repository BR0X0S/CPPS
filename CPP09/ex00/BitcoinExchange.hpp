/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:17:35 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/22 21:43:08 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <algorithm>

class Btc
{
	private:
	
		std::map<std::string, float> data;
		Btc();

	public:

		Btc(std::string inputFile);
		Btc(const Btc& other);
		Btc& operator=(const Btc& other);
		~Btc();

		void	fillData();
		void	parceInput(const std::string inputFile);
		double	checkData(std::string date, std::string value);
};


#endif