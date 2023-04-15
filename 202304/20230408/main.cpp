#include <iostream>

int main()
{
	double pi=0;
	for (double i=1 ,flag=1; (1.0/i)<1E-6; i+=2)
	{
		pi+=4.0/i*flag;
		flag=-flag;
	}
	std::cout << pi << std::endl;
	return 0;
}
