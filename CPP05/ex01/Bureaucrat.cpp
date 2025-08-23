/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:34:29 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/22 22:39:49 by oumondad         ###   ########.fr       */
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
int	Bureaucrat::getGrade() const {return grade;}

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

void Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << name << " signed " << obj.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl;
    }
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

Bureaucrat::~Bureaucrat()
{
    std::cout << "Buraucrat " << name << " destructor called" << std::endl;
}
