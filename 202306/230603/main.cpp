#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int N, lena, lenb;
	cin >> N;
	char arr[N], brr[N], rrr[N + 1];
	rrr[N + 1] = 0;
	for(int i = 0; i < N; i++)
	{
		rrr[i] = 0;
		arr[i] = 0;
		brr[i] = 0;
	}
	char crr[N];
	cin.get();
	cin.get(crr, N + 1);
	lena = strlen(crr);
	for (int i = 0;  i < strlen(crr); i++)
	{
		arr[i] = crr[strlen(crr) - i - 1] - '0';
	}
	cin.get();
	cin.get(crr, N + 1);
	lenb = strlen(crr);
	for (int i = 0; i < strlen(crr); i++)
	{
		brr[i] = crr[strlen(crr) - i - 1] - '0';
	}
	for (int i = 0; i < N; i++)
	{	
		rrr[i] = (rrr[i] + arr[i] + brr[i]) % 10;
		rrr[i + 1] = (rrr[i] + arr[i] + brr[i] - rrr[i]) / 10;
	}
	for (int i = 0; i < N + 1; i++)
	{
		cout << (int)rrr[N - i];
	}
	cout << endl;
	return 0;
}
