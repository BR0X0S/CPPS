#include <iostream>
#include <string>

int main(int ac, char **av)
{
	std::string s1 = av[1];
	std::string s2 = av[2];
	std::string line = "hellow baby yo are the1 bast wan in may layf";
	size_t pos = line.find(s1);
	if (pos != std::string::npos)
	{
		
		std::cout << line.erase(pos, s1.length()) << std::endl;
		std::cout << line.insert(pos, s2) << std::endl;
		return 0;
	}
	std::cout << -1 << std::endl;
}

