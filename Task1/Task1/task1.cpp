#include <iostream>
#include <cmath>
int main()
{
	double x, f;
	x = 5;
	std::cout << "х = " << x << std::endl;
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));
	std::cout << "f = " << f << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f = (cos(x) + sin(x)) / (cos(x) - sin(x));
	std::cout << "f = " << f << std::endl;
	return 0;
}



