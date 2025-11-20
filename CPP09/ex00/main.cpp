/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:49:02 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/20 23:05:20 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
    (void)av;
    if (ac != 2)
    {
        std::cerr << "Wrong arguments" << std::endl;
        return 1;
    }
    try
    {
        Btc exchange(av[1]);
        // Btc exchange;
        // print data
        for (std::map<std::string, float>::iterator it = exchange.data.begin(); it != exchange.data.end(); ++it)
        {
            std::cout << it->first << " => " << it->second << std::endl;
        }
        // print input
        // for (std::map<std::string, float>::iterator it = exchange.input.begin(); it != exchange.input.end(); ++it)
        // {
        //     std::cout << it->first << " => " << it->second << std::endl;
        // }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
