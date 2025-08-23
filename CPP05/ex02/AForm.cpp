/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:40:13 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/22 23:12:20 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

std::string AForm::getName() const {return (name);}
bool AForm::getIsSigned() const {return (isSigned);}
int AForm::getgradeToSign() const {return (gradeToSign);}
int AForm::getGradeToExecute() const {return (gradeToExecute);}

AForm::AForm(): name("to be MISSI"), gradeToSign(1), gradeToExecute(1), isSigned(false) {}
AForm::AForm(std::string Name, int gradeToSign, int GradeToExecute): name(Name), gradeToSign(gradeToSign), gradeToExecute(GradeToExecute), isSigned(false)
{
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
    else if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
}

void  AForm::beSigned(Bureaucrat const &bure)
{
    if (isSigned)
        throw AlreadySigned();
    if (bure.getGrade() > gradeToSign)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream &operator << (std::ostream &os, const AForm &obj)
{
    std::string status;
    if (obj.getIsSigned())
        status = "Status SIGNED";
    else
        status = "Status NOT SIGNED";
    os << obj.getName() << " AForm has the sign Grade " << obj.getgradeToSign() 
        << " and a Execute Grade " << obj.getGradeToExecute() << ". " << status << std::endl;
    return os;
}

AForm::AForm(const AForm &obj): name(obj.name), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute)
{
    isSigned  = obj.isSigned;
}

AForm	&AForm::operator = (const AForm &obj)
{
    if (this != &obj)
        this->isSigned = obj.isSigned;
    return (*this);
}

AForm::~AForm()
{
    std::cout << name << " AForm destructor called" << std::endl;
}
