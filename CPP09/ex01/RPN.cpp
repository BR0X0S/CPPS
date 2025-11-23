/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 20:31:50 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/23 21:20:45 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <sstream>

bool checkInput(std::string args)
{
    std::stringstream ss(args);
    char c;
    while(ss >> c)
    {
        std::cout << "c1 => " << c << std::endl;
        
        if (c != '0' || c != '1' || c != '2' || c != '3' || c != '4' ||
            c != '5' || c != '6' || c != '7' || c != '8' || c != '9' ||
            c != '+' || c != '-' || c != '*' || c != '/')
        {
            std::cout << "c2 => " << c << std::endl;
            return false;
        }
        // if (c != '+' || c != '-' || c != '*' || c != '/' )
    }
    return true;
    
}




void Rpn::calculate(std::string args)
{
    
    if (!checkInput(args))
        throw std::runtime_error("Error: wrong input");
}
