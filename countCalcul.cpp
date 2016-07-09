// countCalcul.cpp

#include <iostream>

using namespace std;

int main(){
	float temp, total;
	for(int i = 0;i < 12;i++){
		cin >> temp;
		total += temp;
	}
	total /= 12;
	printf("$%.2f", total);
	return 0;
}