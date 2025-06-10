/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:11:33 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/09 18:41:56 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Adamonkey")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(std::string Type): type(Type)
{
	std::cout << "Animal Name Constructor Called" << std::endl;
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

std::string Animal::getType() const
{
	return (type);
}
