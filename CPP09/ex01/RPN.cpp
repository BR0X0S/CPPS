/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 20:31:50 by oumondad          #+#    #+#             */
/*   Updated: 2025/11/25 18:18:18 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <sstream>
#include <cstdlib>

bool Rpn::checkInput(std::string args)
{
    std::stringstream ss(args);
    std::string c;
    
    while(ss >> c)
    {
        int signe = 1;
        if (c.length() == 2 && (c[0] == '+' || c[0] == '-') && isdigit(c[1]))
        {
            if (c[0] == '-')
                signe = -1;
            c.erase(0,1);
        }
        if (c.length() != 1) return false;
        if (!(isdigit(c[0]) || c == "+" || c == "-" || c == "*" || c == "/"))
        {
            std::cout << "c2 => " << c << std::endl;
            return false;
        }
        if (isdigit(c[0]))
            holder.push(std::atoi(c.c_str()) * signe);
        if (c == "+" || c == "-" || c == "*" || c == "/")
        {
            if (holder.size() < 2)
                return (false);
            long y = holder.top();holder.pop();
            long x = holder.top();holder.pop();
            if (c == "+")
                holder.push(x + y);
            else if (c == "-")
                holder.push(x - y);
            else if (c == "*")
                holder.push(x * y);
            else if (c == "/")
            {
                if (y == 0)
                    throw std::runtime_error("can't ");
                holder.push(x / y);
            }
        }
    }
    return true;
}

void Rpn::calculate(std::string args)
{
    if (!checkInput(args))
        throw std::runtime_error("Error: wrong input");
    if (holder.size() != 1)
        throw std::runtime_error("Error");
    std::cout << holder.top() << std::endl;
}
