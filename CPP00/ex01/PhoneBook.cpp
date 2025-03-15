/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:27:22 by oumondad          #+#    #+#             */
/*   Updated: 2025/03/06 23:56:00 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::setContact(std::string data, int y, int x)
{cont[x].setInfo(data, y);}

Contact PhoneBook::getContact(int i)
{return (cont[i]);}