#include <iostream>

int main()
{
	int a[5] = {1,2,3,4,5};  // 定义一个有五个项的数组
	std::cout << a[0] << std::endl;  // 获取列表第一项(c++语言数组索引从0开始 所以第一项就是0)
	for (int i=0;i<5;i++)  // 遍历数组
	{
		std::cout << a[i] << std::endl;
	}
	return 0;  // 程序结束
}
