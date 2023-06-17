#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[] = "Hello";
	for (int i = strlen(str); i>0; i--)
	{
		cout << str << endl;
		str[i-1] = '\0';
	}
	return 0;
}

