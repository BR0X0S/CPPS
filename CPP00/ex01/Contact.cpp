/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:43:17 by oumondad          #+#    #+#             */
/*   Updated: 2025/03/06 23:49:55 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getInfo(int i)
{
	if (i < 0 || i > 4)
		return NULL;
	return (info[i]);
}

void Contact::setInfo(std::string data, int y)
{info[y] = data;}
