#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>



class Simo
{
	public:
		Simo();
		~Simo();
		static int sum(int a, int b);
		void	set(int val);
		int		get();
		int ft_strlen(int x) const;
	private:
		int b;
};

int Simo::sum(int a, int b)
{
	return (a + b);
}

int Simo::get()
{
	return b;
}

Simo::~Simo()
{
	std::cout << "BYE ByYYYYE I died\n";
}

Simo::Simo()
{
	std::cout << "I WILL CONSTRUCT SIDI MOULAY\n";
}

void Simo::set(int val)
{
	b = val;
}

// int main(void)
// {
// 	simo obj;

// 	obj.set(40);
// 	return 0;

// 	int a ;
// 	// int &alias = a;

	
// }

//  ********** ********** ********** ********** 
//  ********** ********** ********** ********** 
//  __________ __________ __________ __________
// |   index  |first name| last name| nickname |
//  ---------- ---------- ---------- ----------
// |          |          |          |          |

Simo*	dir(void)
{
	Simo *b = new Simo();
	return (b);
}

// int main(void)
// {
// 	Simo *tmp = dir();
// 	// a.set(6);
// 	// int i = a.get();
// 	// std::cout << i << std::endl;
// 	// std::string hamid;
// 	// // Messi x;

// 	// hamid = "KuwagataAlpha";
// 	// // std::cout << hami
// 	// if (hamid.length() > 9)
// 	// {
// 	// 	hamid.resize(10);
// 	// 	hamid.replace(9, 1, ".");
// 	// }
// 	// std::cout << std::setw(10) << hamid << std::endl;
// 	// std::cout << hamid << std::endl;
// 	delete tmp;
// 	std::cout << "END\n";
// }

// int	main(void)
// {
// 	// Simo messi;

// 	// // int x = messi.get();
// 	// // std::cout << x << std::endl;
// 	// int a = Simo::sum(5, 4);
// 	// std::cout << a << std::endl;
// 	char	*ptr = NULL;
// 	std::cout << *ptr << std::endl;
// }

// void shifting(const int &i)
// {
// 	// i = i << 8;
// }

int Simo::ft_strlen(int x) const
{
	x++;
	return x;
	// int i = 0;
	// while (str[i])
	// 	i++;
	// return i;
}

int	main(int ac, char **av)
{
	// float x;
	// x = 13.37;
	// int a;
	// a = (int)x << 8;
	// float b;
	// b = a >> 8;
	// int x = atoi(av[1]);
	// shifting(x);
	// std::cout << b << std::endl;

	Simo test;
	// char *str = "oussama";
	int x = test.ft_strlen(10);
	std::cout << x << std::endl;

}
