/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:11:33 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/09 17:36:12 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal(), brain(new Brain())
{
	for (int i = 0; i < 100; i++)
		brain->setIdea("Ghrrrrr", i);
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &obj): brain(new Brain())
{
	*this = obj;
}

Cat &Cat::operator = (const Cat &obj)
{
	if (this != &obj)
	{
		type = obj.type;
		*brain = *(obj.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Myaw" << std::endl;
}
