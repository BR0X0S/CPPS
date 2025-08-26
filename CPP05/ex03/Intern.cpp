/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:04:59 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/25 16:21:35 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &obj) {(void)obj;}
Intern::~Intern(){}

Intern &Intern::operator = (const Intern &obj)
{
	(void)obj;
	return (*this);
}

void toLower(std::string &str)
{
	for (int i = 0; str[i]; i++)
		str[i] = tolower(int(str[i]));
	
}

const char* Intern::FormNotValid::what() const throw()
{
    return "FormName is not valid!";
}

AForm *Intern::newShrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::newRobotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::newPresidential(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string formName, const std::string &target)
{
	toLower(formName);

	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *(Intern::*func[3])(const std::string &target) = {&Intern::newShrubbery, &Intern::newRobotomy, &Intern::newPresidential};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i])
		{
			std::cout << "Intern creates " << forms[i] << " form." << std::endl;
			return (this->*func[i])(target);
		}
	}
	throw FormNotValid();
	return NULL;
}
