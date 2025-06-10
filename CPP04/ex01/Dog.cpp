/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:11:33 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/09 17:36:12 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(), brain(new Brain())
{
	for (int i = 0; i < 100; i++)
		brain->setIdea("Big Bone", i);
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &obj): brain(new Brain)
{
	*this = obj;
}

Dog	&Dog::operator = (const Dog &obj)
{
	if (this != &obj)
	{
		type = obj.type;
		*brain = *(obj.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "3aw" << std::endl;
}
