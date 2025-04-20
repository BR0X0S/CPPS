/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumondad <oumondad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 17:42:39 by oumondad          #+#    #+#             */
/*   Updated: 2025/04/20 22:27:39 by oumondad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int count_world(std::string line)
{
	int i = 0;
	int word = 0;

	while (line[i])
	{
		while (line[i] && (line[i] == ' ' || (line[i] >= 9 && line[i] <= 13)))
			i++;
		if (line[i] && line[i] != ' ' && (line[i] < 9 || line[i] > 13))
			word++;
		while (line[i] && line[i] != ' ' && !(line[i] >= 9 && line[i] <= 13))
			i++;
	}
	return (word);
}

void	replace(std::ifstream &file, std::string line, std::ofstream &newFile)
{
		while (getline(file, line))
		{
			newFile << line;
			if (!file.eof())
				newFile << "\n";
			int i = 0;
			while (i < count_world(line))
			{
				
				i++;
			}
		}
}

int main(int ac, char **av)
{
	(void)ac;
	std::cout << count_world(av[1]) << std::endl;
	// if (ac == 4)
	// {
	// 	std::ifstream file(av[1]);
	// 	if (!file)
	// 	{
	// 		std::cout << "ERROR : Can't Open File" << std::endl;
	// 		return (1);
	// 	}
	// 	std::string line;
	// 	std::string outf = av[1];
	// 	outf += ".replace";
	// 	std::ofstream newFile(outf.c_str());
	// 	if (!newFile)
	// 	{
	// 		std::cout << "ERROR : Can't Creat newFile" << std::endl;
	// 		return (1);
	// 	}
	// 	// now call replace() function
	// 	replace(file, line, newFile);
	// 	return (0);
	// }
	// std::cout << "ERROR : Wrong Parameters" << std::endl;
	return (0);
}
