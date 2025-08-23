/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:34:29 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/23 18:46:57 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("ohammou"), grade(150)
{}

Bureaucrat::Bureaucrat(const std::string Name, short int Grade): name(Name)
{
    if (Grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    grade = Grade;
}

std::string	Bureaucrat::getName() const {return name;}
short int	Bureaucrat::getGrade() const {return grade;}

void	Bureaucrat::incrementGrade()
{
    if (grade < 1)
        grade--;
    throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decrementGrade()
{
    if (grade < 150)
        grade++;
    throw Bureaucrat::GradeTooLowException();
}

std::ostream	&operator << (std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return (os);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): name(obj.name)
{
    *this = obj;
}

Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->grade = obj.grade;
    }
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what()  const throw()
{
    return "Bureaucrat Grade is Too High";
}

const char *Bureaucrat::GradeTooLowException::what()  const throw()
{
    return "Bureaucrat Grade is Too Low";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << name << " destructor called" << std::endl;
}
