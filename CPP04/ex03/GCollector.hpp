/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GCollector.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:23:27 by oumondad          #+#    #+#             */
/*   Updated: 2025/06/15 21:15:53 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GCOLLECTOR_HPP
#define GCOLLECTOR_HPP

#include "AMateria.hpp"

struct GCollector
{
	AMateria    *Adderss;
	GCollector  *next;
	~GCollector();
};

void Collect_materia(AMateria *materia);

#endif