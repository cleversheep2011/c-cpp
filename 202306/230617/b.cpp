#include <iostream>
using namespace std;
int main()
{
	double s = 0;
	unsigned long long n = 1;
	int K = 0;
	while (true)
	{
		K++;
		while(s < K)
		{
			s += 1.0/n;
			n++;
		}
		printf("%d: %lld\n", K, n);
	}
	return 0;
}
