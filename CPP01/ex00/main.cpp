/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 11:30:43 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/12 17:08:16 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zmb;
	randomChump("stack zombie");
	zmb = newZombie("heap zombie");
	zmb->announce();
	delete (zmb);
}
