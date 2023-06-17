#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int beideviser = a > b ? a : b;
	int deviser = a > b ? b : a;
	int remander = a % b;
	while (remander != 0){
		beideviser = deviser;
		deviser = remander;
		remander = beideviser % deviser;
	}
	cout << deviser << endl;
	return 0;
}
