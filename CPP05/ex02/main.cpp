/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:33:27 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/23 18:44:31 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat A("oussama", 1);
		Bureaucrat B;
		Bureaucrat C("Missi", 45);
	
		std::cout << "\ntest shrubbery\n" << std::endl;
		
			ShrubberyCreationForm X("home");
			A.signForm(X);
			A.executeForm(X);
			B.executeForm(X);
	
		std::cout << "\ntest robotomized\n" << std::endl;

			RobotomyRequestForm Y("alitta");
			A.signForm(Y);
			C.executeForm(Y);
			A.executeForm(Y);
			B.executeForm(Y);

		std::cout << "\ntest Pardoned\n" << std::endl;

			PresidentialPardonForm Z("7mo");
			A.signForm(Z);
			PresidentialPardonForm ZZ("hamid");
			ZZ = Z;
			A.executeForm(Z);
			A.executeForm(ZZ);

		std::cout << "\ntest error\n" << std::endl;

			ShrubberyCreationForm E("error");
			B.signForm(E);
			C.executeForm(E);
			A.executeForm(E);
		
		std::cout << "\n\n\n" <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
