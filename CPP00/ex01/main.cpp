/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 23:53:18 by oumondad          #+#    #+#             */
/*   Updated: 2025/03/10 21:22:24 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void print_all(PhoneBook phon, int i)
{
	for (int x = 0; x < i; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			std::cout << phon.getContact(x).getInfo(y) << std::endl;
		}
	}
}

int	isPrintable(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!isprint(str[i]))
			return (0);
	}
	return (1);
}

int	checker(std::string str)
{
	int i = 0;
	int s = 0;

	if (str.empty() || !isPrintable(str))
		return (1);
	while (str[i])
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			s++;
		i++;
	}
	if (s == i)
		return (1);
	return (0);
}

void	ft_add(PhoneBook &phon, int contact)
{
	int 		y = 0;
	std::string tmp;
	std::string	arr[5] = {"first name : ", "last name : ", 
		"nickname : ", "phone number : ", "darkest secret : "};

	while (y < 5)
	{
		std::cout << arr[y];
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			std::exit(0);
		phon.setContact(tmp, y, contact);
		if (checker(tmp))
		{
			std::cout << "Error, Please Try Again!" << std::endl;
			continue;
		}
		y++;
	}
}

std::string handleSize(std::string str)
{
	if (str.length() > 9)
	{
		str.resize(10);
		str.replace(9, 1, ".");
	}
	return (str);
}

void	ft_search(PhoneBook phon, int i)
{
	std::string inti;
	std::cout << " __________ __________ __________ __________" << std::endl;
	std::cout << "|   index  |first name| last name| nickname |" << std::endl;
	std::cout << " ---------- ---------- ---------- ----------" << std::endl;
	
	for (int x = 0; x < i; x++)
	{
		std::cout << "|"; std::cout << std::setw(10) << x + 1; std::cout << "|";
		std::cout << std::setw(10) << handleSize((phon.getContact(x).getInfo(0))) << "|";
		std::cout << std::setw(10) << handleSize((phon.getContact(x).getInfo(1))) << "|";
		std::cout << std::setw(10) << handleSize((phon.getContact(x).getInfo(2))) << "|";
		std::cout << "\n ---------- ---------- ---------- ----------" << std::endl;
	}
	if (i == 0)
		return ;
	while (true)
	{
		std::cout << "Enter The Index Of The Contact for Full Info : ";
		std::getline(std::cin, inti);
		if (inti.length() != 1)
			continue;
		int nbr = ((inti[0] - 48) - 1);
		if ((inti >= "1" && inti <= "8") && (nbr < i))
		{
			std::cout << "first name   : " << phon.getContact(nbr).getInfo(0) << std::endl;
			std::cout << "last  name   : " << phon.getContact(nbr).getInfo(1) << std::endl;
			std::cout << "nickname     : " << phon.getContact(nbr).getInfo(2) << std::endl;
			std::cout << "phone number : " << phon.getContact(nbr).getInfo(3) << std::endl;
			std::cout << "dark secret  : " << phon.getContact(nbr).getInfo(4) << std::endl;
			break;
		}
	}
}

int main()
{
	PhoneBook	phone;
	std::string command;
	int			contact = 0;
	int			size = 0;

	std::cout << "***********************************************************" << std::endl;
	std::cout << "*----------Hello Mr User This Is Your Phone Book----------*" << std::endl;
	std::cout << "***********************************************************\n\n" << std::endl;
	while (command.compare("EXIT"))
	{
		std::cout << "Enter One Of The Following Commands {ADD} {SEARCH} {EXIT} : ";
		std::getline(std::cin, command);

		if (std::cin.eof())
			std::exit(0);
		if (!command.compare("ADD"))
		{
			ft_add(phone, contact);
			contact++;
			size++;
			if (contact == 8)
				contact = 0;
			if (size >= 8)
				size = 8;
		}
		if (!command.compare("SEARCH"))
		{
			ft_search(phone, size);
		}
	}
	return (0);
}
