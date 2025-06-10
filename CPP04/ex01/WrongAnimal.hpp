/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:12:14 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/09 18:44:47 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:

		std::string type;

	public:
	
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal &operator = (const WrongAnimal &obj);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;

};

#endif