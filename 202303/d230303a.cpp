#include <iostream>
#define count 3

int main()
{
	int sheep[count];
	int sum=0;
	for (int i=0;i<count;i++)
	{
		std::cin >> sheep[i];
	}
	for(int i=0;i<count;i++)
	{
		std::cout << sheep[i];
		sum+=sheep[i];
		if (!(i==count-1))
		{
			std::cout << ",";
		}
	}
	std::cout << std::endl;
	for(int i=count-1;i>-1;i--)
	{
		std::cout << sheep[i];
		if (!(i==0))
		{
			std::cout << ",";
		}
	}
	std::cout << std::endl;
	std::cout << sum << std::endl;
}
