/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:33:27 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/21 16:17:16 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("oussama", 1);
        std::cout << "Bureaucrat " << a.getName() << " has the grad " << a.getGrade() << std::endl;
        Bureaucrat b;
        std::cout << b << std::endl;
        Bureaucrat c("hamid", 200);
        std::cout << "Bureaucrat " << c.getName() << " has the grad " << c.getGrade() << std::endl;;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
