// RMBpaid.cpp

#include <iostream>

using namespace std;

int main(){
	int den[] = {100, 50, 20, 10, 5, 1};
	int numOfDen[6] = {0};
	int money; cin >> money;
	int i = 0;
	while(money > 0){
		while(money >= den[i]){
			money -= den[i];
			numOfDen[i]++;
		}
		i++;
	}
	for(i = 0;i < 6;i++)
		cout << numOfDen[i] << endl;
	return 0;
}