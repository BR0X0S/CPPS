/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:48:10 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/10 16:10:43 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


class Brain
{
	private:

		std::string ideas[100];

	public:
	
		Brain();
		Brain(const Brain &obj);
		Brain &operator = (const Brain &obj);
		~Brain();

};

#endif