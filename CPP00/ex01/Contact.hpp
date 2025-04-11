/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:43:31 by oumondad          #+#    #+#             */
/*   Updated: 2025/03/23 20:43:20 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <cstdlib>
# include <iomanip>

class Contact
{
	private:
		std::string info[5];
	public:
		void 		setInfo(std::string data, int y);
		std::string getInfo(int i);
};

#endif