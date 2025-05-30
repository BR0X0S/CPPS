#include <iostream>
#include <string>

// float trialculate(Point const &a, Point const &b, Point const &c)
// {
// 	float A = a.getXvalue() * (b.getYvalue() - c.getYvalue());
// 	float B = b.getXvalue() * (c.getYvalue() - a.getYvalue());
// 	float C = c.getXvalue() * (a.getYvalue() - b.getYvalue());

// 	float sum = std::abs(A + B + C);
// 	return (sum / 2);
// }

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	float mainTriangle = trialculate(a, b, c);
// 	float firstTriangle = trialculate(a, b, point);
// 	float seacondTriangle = trialculate(a, point, c);
// 	float therdTriangle = trialculate(point, b, c);

// 	if (firstTriangle == 0 || seacondTriangle == 0 || therdTriangle == 0)
// 		return (false);
// 	if (mainTriangle == (firstTriangle + seacondTriangle + therdTriangle))
// 		return (true);
// 	return (false);
// }

// Fixed trialculate(Point const &a, Point const &b, Point const &c)
// {
// 	Fixed A = a.getXvalue() * (b.getYvalue() - c.getYvalue());
// 	Fixed B = b.getXvalue() * (c.getYvalue() - a.getYvalue());
// 	Fixed C = c.getXvalue() * (a.getYvalue() - b.getYvalue());
// 	Fixed sum =(A + B + C) / 2;

// 	if (sum < 0)
// 		return ((sum * -1));
// 	return (sum);
// }

// bool bsp( Point const a, Point const b, Point const c, Point const point)
// {
// 	Fixed mainTriangle = trialculate(a, b, c);
// 	Fixed firstTriangle = trialculate(a, b, point);
// 	Fixed seacondTriangle = trialculate(a, point, c);
// 	Fixed therdTriangle = trialculate(point, b, c);

// 	if (firstTriangle == 0 || seacondTriangle == 0 || therdTriangle == 0)
// 		return (false);
// 	if (mainTriangle == (firstTriangle + seacondTriangle + therdTriangle))
// 		return (true);
// 	return (false);
// }

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

