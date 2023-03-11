#include <iostream>
#include <iomanip>

int a(int a1,int a2,int time)
{
	if(time==1)
	{
		return a1;
	}else{
		return a(a2,a2+(a2-a1),time-1);
	}
}
int main()
{
	int a1,a2,time;
	std::cin >> a1 >> a2 >> time;
	std::cout << a(a1,a2,time) << std::endl;
	return 0;
}
