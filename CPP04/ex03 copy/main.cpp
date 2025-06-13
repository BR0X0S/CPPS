/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:43:51 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/13 18:45:53 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}

// int main()
// {
// 	Character hmo("frozen");
// 	Character ms3od;
// 	Character missi("estes");

// 	hmo.equip(new Ice);
// 	hmo.equip(new Cure);
// 	hmo.equip(new Ice);
// 	hmo.equip(new Ice);
// 	missi.equip(new Cure);
// 	ms3od = missi;
	
// 	hmo.equip(new Cure);
// 	hmo.unequip(1);
// 	hmo.equip(new Ice);
// 	ms3od.use(0, hmo);
// 	hmo.use(1, ms3od);
// }
