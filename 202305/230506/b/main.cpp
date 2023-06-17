#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char isbn[14];
	int sum = 0;
        scanf("%s", isbn);
	for (int i = 0,index = 0; i<strlen(isbn); i++){
		if (isbn[i] == '-'){
			continue;
		}
		sum += (isbn[i]-'0') * (index + 1);
		index++;
	}
	if (sum % 11 == 4){
		cout << "Right!" << endl;
	}else{
		cout << sum % 11 << endl;
	}
	return 0;
}
