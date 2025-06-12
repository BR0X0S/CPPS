/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:11:33 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/09 17:36:12 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat"), Name("Ms3oud")
{
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(std::string name): WrongAnimal("WrongCat"), Name(name)
{
	std::cout << "WrongCat Name Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	*this = obj;
}

WrongCat &WrongCat::operator = (const WrongCat &obj)
{
	if (this != &obj)
		type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Myaw" << std::endl;
}

