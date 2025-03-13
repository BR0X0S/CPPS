#include <iostream>
#include <string>
#include <iomanip>



class Simo
{
	public:
		Simo();
		~Simo();
		void	set(int val);
		int		get();
	private:
		int b;
};

int Simo::get()
{
	return b;
}

Simo::~Simo()
{
	std::cout << "BYE ByYYYYE I died\n";
}

Simo::Simo() : b(0)
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

int main(void)
{
	Simo *tmp = dir();
	// a.set(6);
	// int i = a.get();
	// std::cout << i << std::endl;
	// std::string hamid;
	// // Messi x;

	// hamid = "KuwagataAlpha";
	// // std::cout << hami
	// if (hamid.length() > 9)
	// {
	// 	hamid.resize(10);
	// 	hamid.replace(9, 1, ".");
	// }
	// std::cout << std::setw(10) << hamid << std::endl;
	// std::cout << hamid << std::endl;
	delete tmp;
	std::cout << "END\n";
}
