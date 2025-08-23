/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 22:47:37 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/23 16:38:36 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("shrubbery", 145, 135), _target(target)
{}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw NotSigned();
	else if (executor.getGrade() > this->getgradeToSign())
		throw GradeTooLowException();
	
	std::string fname = _target + "_shrubbery";
	std::ofstream file(fname.c_str());
	
	file << "   *\n";
	file << "  ***\n";
	file << " *****\n";
	file << "*******\n";
	file << "   *\n";
	file << "  ***";
}
