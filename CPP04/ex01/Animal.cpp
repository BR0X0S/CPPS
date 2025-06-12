/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:11:33 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/11 17:24:13 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Adamonkey")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
}

Animal &Animal::operator = (const Animal &obj)
{
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "????" << std::endl;
}

void Animal::announceIdeas() const
{
	std::cout << "I'm not a type of Animal" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
