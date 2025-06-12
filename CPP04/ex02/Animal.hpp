/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:12:14 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/11 17:38:07 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:

		std::string type;

	public:
	
		Animal();
		Animal(const Animal &obj);
		Animal &operator = (const Animal &obj);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual void announceIdeas() const;
		std::string getType() const;


};

#endif