/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:42:39 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/23 16:16:20 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	replace(std::ifstream &file, std::string &line, std::ofstream &newFile, char *s1, char *s2)
{
	while (getline(file, line))
	{
		int i = 0;
		int j;
		while (line[i])
		{
			j = 0;
			while(line[i] == s1[j])
			{
				int x = i;
				i++;
				j++;
				if (j == ft_strlen(s1))
				{
					newFile << s2;
					break;
				}
				else
					i = x;
			}
			newFile << line[i];
			i++;
		}
			if (!file.eof())
				newFile << "\n";
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream file(av[1]);
		if (!file)
		{
			std::cout << "ERROR : Can't Open File" << std::endl;
			return (1);
		}
		std::string line;
		std::string outf = av[1];
		outf += ".replace";
		std::ofstream newFile(outf.c_str());
		if (!newFile)
		{
			std::cout << "ERROR : Can't Creat newFile" << std::endl;
			return (1);
		}
		replace(file, line, newFile, av[2], av[3]);
		return (0);
	}
	std::cout << "ERROR : Wrong Parameters" << std::endl;
	return (0);
}
