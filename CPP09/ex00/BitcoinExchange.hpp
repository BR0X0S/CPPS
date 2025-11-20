/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:17:35 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/20 23:43:16 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>

class Btc
{
	private:

	
	public:
			std::map<std::string, float> data;
		std::map<std::string, float> input;

		Btc(std::string inputFile);
		// Btc();
		~Btc();
		void	fillData();
		void	parceInput(const std::string inputFile);
		double	checkData(std::string date, std::string value);
		
		
		
};


#endif