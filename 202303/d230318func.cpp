#include <iostream>

float area(float);

int main()
{
	std::cout << area(100) << std::endl;
	return 0;
}

float area(float width)
{
	return width * width;
}
