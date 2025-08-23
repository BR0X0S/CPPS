/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:34:12 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/23 00:38:06 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:

		const std::string	name;
		short int			grade;

	public:
	
		Bureaucrat();
		Bureaucrat(const std::string Name, short int Grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat	&operator = (const Bureaucrat &obj);
		~Bureaucrat();

		std::string		getName() const;
		int				getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		void			signForm(AForm &obj);
		void			executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
		
			const char *what()  const throw()
			{
				return "Bureacrat Grade is Too Hight";
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			
			const char *what()  const throw()
			{
				return "Bureacrat Grade is Too Low";
			}
		};
};

std::ostream	&operator << (std::ostream& os, const Bureaucrat& obj);

#endif