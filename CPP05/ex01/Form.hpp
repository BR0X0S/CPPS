/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:40:02 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/22 22:14:09 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:

		const std::string   name;
		const int           gradeToSign;
		const int           gradeToExecute;
		bool                isSigned;
		
	public:

		Form();
		Form(std::string Name, int gradeToSign, int GradeToExecute);
		Form(const Form &obj);
		Form	&operator = (const Form &obj);
		~Form();

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getgradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(Bureaucrat const &bure);
		
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw()
			{
				return "Grade too High!";
			}
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw()
			{
				return "Grade too Low!";
			}
		};
		class AlreadySigned : public std::exception
		{
			const char *what() const throw()
			{
				return "Form is already Signed!";
			}
		};
};

std::ostream &operator << (std::ostream &os, const Form &obj);

#endif