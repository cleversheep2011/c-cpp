#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int minprice, price, count, sum, dev;
	cin >> sum;
	for (int i = 0; i < 3; i++){
		cin >> count >> price;
		dev = sum / count;
		if (sum % count != 0){
			dev++;
		}
		if (minprice > price * dev || i == 0){
			minprice = price * dev;
		}
	}
	cout << minprice << endl;
	return 0;
}
