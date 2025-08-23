/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:40:13 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/22 22:25:10 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string Form::getName() const {return (name);}
bool Form::getIsSigned() const {return (isSigned);}
int Form::getgradeToSign() const {return (gradeToSign);}
int Form::getGradeToExecute() const {return (gradeToExecute);}

Form::Form(): name("to be MISSI"), gradeToSign(1), gradeToExecute(1), isSigned(false) {}
Form::Form(std::string Name, int gradeToSign, int GradeToExecute): name(Name), gradeToSign(gradeToSign), gradeToExecute(GradeToExecute), isSigned(false)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

void  Form::beSigned(Bureaucrat const &bure)
{
    if (isSigned)
        throw AlreadySigned();
    if (bure.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream &operator << (std::ostream &os, const Form &obj)
{
    std::string status;
    if (obj.getIsSigned())
        status = "Status SIGNED";
    else
        status = "Status NOT SIGNED";
    os << obj.getName() << " Form has the sign Grade " << obj.getgradeToSign() 
        << " and a Execute Grade " << obj.getGradeToExecute() << ". " << status << std::endl;
    return os;
}

Form::Form(const Form &obj): name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    isSigned  = obj.isSigned;
}

Form	&Form::operator = (const Form &obj)
{
    if (this != &obj)
        this->isSigned = obj.isSigned;
    return (*this);
}

Form::~Form()
{
    std::cout << name << " Form destructor called" << std::endl;
}
