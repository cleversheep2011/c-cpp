#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
	int arr[n];
	for(int num, i = 0; i<n; i++)
	{
		cin >> num;
		arr[i]=num;
	}
	cin >> x;
	for (int i=x-1;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	for (int i = 0; i < n-1; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
