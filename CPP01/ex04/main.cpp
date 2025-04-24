/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:42:39 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/24 17:52:32 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	replace(std::ifstream &file, std::ofstream &newFile, std::string s1, std::string s2)
{
	std::string line;
	while (getline(file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		newFile << line;
		if (!file.eof())
			newFile << "\n";
	}
}

int main(int ac, char **av)
{
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (ac == 4 && !s1.empty() && !s2.empty())
	{
		std::ifstream file(av[1]);
		if (!file)
		{
			std::cout << "ERROR : Can't Open File" << std::endl;
			return (1);
		}
		std::string outf = av[1];
		outf += ".replace";
		std::ofstream newFile(outf.c_str());
		if (!newFile)
		{
			std::cout << "ERROR : Can't Creat newFile" << std::endl;
			return (1);
		}
		replace(file, newFile, s1, s2);
		return (0);
	}
	std::cout << "ERROR : Wrong Parameters" << std::endl;
	return (0);
}
