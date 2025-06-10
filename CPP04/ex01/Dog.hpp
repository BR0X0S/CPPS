/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:12:14 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/10 16:25:59 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:

		Brain		*brain;

	public:

		Dog();
		Dog(const Dog &obj);
		Dog &operator = (const Dog &obj);
		~Dog();

		void makeSound() const;
};

#endif