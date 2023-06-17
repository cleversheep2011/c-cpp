#include <iostream>
using namespace std;

void swapA(int, int);
void swapB(int*, int*);
void swapC(int&, int&);

int main()
{
	int a = 10, b = 20;
	printf("orangenal a:%d b:%d\n", a, b);
	swapA(a, b);
	printf("swapA a:%d b:%d\n", a, b);
	a = 10;
	b = 20;
	swapB(&a, &b);
	printf("swapB a:%d b:%d\n", a, b);
	a = 10;
	b = 20;
	swapC(a, b);
	printf("swapC a:%d b:%d\n", a, b);
	return 0;
}

void swapA(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void swapB(int *pa, int *pb)
{
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
}

void swapC(int &ra, int &rb)
{
	ra = ra + rb;
	rb = ra - rb;
	ra = ra - rb;
}

