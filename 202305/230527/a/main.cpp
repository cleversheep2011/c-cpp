#include <iostream>
using namespace std;
int main()
{
	int ren;
	cin >> ren;
	int arr[ren], be, af, s = 0;
	for (int i = 0; i < ren; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < ren; i++)
	{
		af = 0;
		be = 0;
		for (int ben = 0; ben < i; ben++)
		{
			if (arr[ben] > arr[i])
			{
				be++;
			}
		}
		for (int afn = i + 1; afn < ren+1; afn++)
		{
			if (arr[afn] > arr[i])
			{
				af++;
			}
		}
		if (be == af)
		{
			s++;
		}
	}
	cout << s << endl;
	return 0;
}
