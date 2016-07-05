// countMailFee.cpp

#include <iostream>

using namespace std;

int main(){
	int weight; cin >> weight;
	char hurry; cin >> hurry;
	int fee = 8; weight -= 1000;
	while(weight > 0){
		fee += 4;
		weight -= 500;
	}
	if(hurry == 'y')
		fee += 5;
	cout << fee << endl;
	return fee;
}