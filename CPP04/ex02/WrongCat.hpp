/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:12:14 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/09 20:17:04 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

		std::string Name;

	public:
	
		WrongCat();
		WrongCat(std::string name);
		WrongCat(const WrongCat &obj);
		WrongCat &operator = (const WrongCat &obj);
		~WrongCat();

		void makeSound() const;

};

#endif