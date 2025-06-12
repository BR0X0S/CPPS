/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:05:06 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/11 17:37:40 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal *k[10];

	// Animal *Messi = new Animal();
	// Animal Ronaldo;

	for (int i = 0; i < 5; i++)
		k[i] = new Dog();
	std::cout << "----------------------------------------------" << std::endl;
	for (int i = 5; i < 10; i++)
		k[i] = new Cat();
	std::cout << "----------------------------------------------" << std::endl;
	
	k[2]->announceIdeas();
	k[8]->announceIdeas();

	for (int i = 0; i < 10; i++)
		delete k[i];

	delete j;
	delete i;

	return 0;
}
