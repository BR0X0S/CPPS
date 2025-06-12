/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 17:12:14 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/11 16:20:45 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:

		Brain		*brain;

	public:
	
		Cat();
		Cat(const Cat &obj);
		Cat &operator = (const Cat &obj);
		~Cat();

		void makeSound() const;
		void announceIdeas() const;

};

#endif