/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:33:27 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/25 16:22:24 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern hmmo;
		Bureaucrat A("oussama", 1);
		Bureaucrat B("Missi", 2);
		Bureaucrat C;

		AForm *roboForm;
		AForm *shrubForm;
		// AForm *presForm;
		
		roboForm = hmmo.makeForm("robotomy request", "Bender");
		shrubForm = hmmo.makeForm("shrubbery creation", "Home");
	
		roboForm->beSigned(A);
		shrubForm->beSigned(B);
		// presForm->beSigned(A);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
