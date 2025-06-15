/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GCollector.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:22:58 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/15 20:16:49 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GCollector.hpp"


void Collect_materia(AMateria *materia)
{
	GCollector *new_node = new GCollector;
	std::cout << " ++++++++++++++++++++++Materia Collected++++++++++++++++++++++ "<< std::endl;
	if (!head)
	{
		new_node -> Adderss = materia;
		new_node -> next = NULL;
		head = new_node;
	}
	else
	{
		new_node->Adderss = materia;
		new_node->next = head;
		head = new_node;
	}
}

GCollector::~GCollector()
{
	std::cout << " ++++++++++++++++++++++GCollector Destructor called++++++++++++++++++++++"<< std::endl;
	GCollector *tmp;
	if (head)
	{
		tmp = head;
		delete head->Adderss;
		head = head->next;
		delete tmp;
	}
}
