#include <iostream>
using namespace std;

int main()
{
	string str1 = "sheep";  // 定义一个string
	char str2[] = "sheep";  // 定义一个char[]
	char str3[] = {'s', 'h', 'e', 'e', 'p'};  // 没有找到\0 程序就会找到str4的\0 所以输出sheepsheep
	char str4[] = {'s', 'h', 'e', 'e', 'p', '\0'}; // 带\0的char[]
	cout << str1 << endl << str2 << endl << str3 << endl << str4 << endl;
	cout << endl;

	char arr[5];
	cin.get(arr, 7);
	cout << arr << endl;
	return 0;
}
