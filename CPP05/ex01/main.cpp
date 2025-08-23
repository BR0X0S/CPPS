/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:33:27 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/22 22:39:23 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    try
    {
        // Bureaucrat a("oussama", 1);
        // std::cout << "Bureaucrat " << a.getName() << " has the grad " << a.getGrade() << std::endl;
        // Form x;
        // std::cout << x << std::endl;
        // Form y("to be ohammou", 150, 150);
        // a.signForm(y);
        // a.signForm(y);
        Bureaucrat A;
        Bureaucrat B("Hamid", 9);
        Bureaucrat C(B);
    
        Form X;
        Form Y("Tamissit", 9, 8);
        Form Z(Y);
        std::cout << C << std::endl;
        std::cout << Z << std::endl;
        A.signForm(Z);
        C.signForm(Z);
        C.signForm(Z);
        std::cout << Z << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
