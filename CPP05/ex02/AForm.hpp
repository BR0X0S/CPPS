/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:40:02 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/23 17:12:39 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:

		const std::string   name;
		const int           gradeToSign;
		const int           gradeToExecute;
		bool                isSigned;
		
	public:

		AForm();
		AForm(std::string Name, int gradeToSign, int GradeToExecute);
		AForm(const AForm &obj);
		AForm	&operator = (const AForm &obj);
		virtual ~AForm();

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getgradeToSign() const;
		int				getGradeToExecute() const;
		void			beSigned(Bureaucrat const &bure);
		virtual	void	execute(Bureaucrat const & executor) const = 0;

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
		class NotSigned : public std::exception
		{
			const char *what() const throw()
			{
				return "Form is Not Signed!";
			}
		};
		class AlreadySigned : public std::exception
		{
			const char *what() const throw()
			{
				return "Form is Already Signed!";
			}
		};
};

std::ostream &operator << (std::ostream &os, const AForm &obj);

#endif