/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 21:15:40 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/25 16:04:47 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request", 72, 45), _target(target)
{}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw NotSigned();
	else if (executor.getGrade() > this->getgradeToSign())
		throw GradeTooLowException();

	std::srand(std::time(0));
	int result = std::rand() % 2;

	if (result)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << _target << " robotomized failed" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): AForm(obj), _target(obj._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &obj)
{
	if (this != &obj)
	{
		_target = obj._target;
		AForm::operator=(obj);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
