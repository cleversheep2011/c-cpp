#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char play[101];
	char incrapt[101];
	int p;
	cin.get(play,100);
	for (int i = 0; i<strlen(play); i++){
		p = play[i]>64&&play[i]<91?65:97;
		incrapt[i] = (play[i] - p + 3) % 26 + p;
	}
	cout << incrapt << endl;
	return 0;
}
