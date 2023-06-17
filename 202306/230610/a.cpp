#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
	int dsn;
	int ssn;
	int ws;
	char str[100];
	for (int n = 1; n < 114514; n++)
	{
		dsn = 0;
		ssn = 0;
		memset(str, ' ', 100);
		sprintf(str, "%d", n);
		ws = strlen(str);
		for (int i = 0; i < ws; i++)
		{
			if (i % 2 == 1)
			{
				dsn = dsn + str[i] - '0';
			}else{
				ssn = ssn + str[i] - '0';
			}
		}
		//cout << dsn << " " << ssn << endl;
		if (dsn == ssn)
		{
			cout << n << endl;
		}
	}
	return 0;
}
