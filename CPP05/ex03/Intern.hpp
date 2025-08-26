/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 19:04:41 by oumondad          #+#    #+#             */
/*   Updated: 2025/08/25 16:21:30 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:

        Intern();
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern();

        AForm *makeForm(std::string formName, const std::string &target);
        AForm *newShrubbery(const std::string &target);
        AForm *newRobotomy(const std::string &target);
        AForm *newPresidential(const std::string &target);

        class FormNotValid : public std::exception
        {
            public :
                const char *what() const throw();
        };
};

#endif