// numOfInter.cpp

#include <iostream>

using namespace std;

int main(){
	int k; cin >> k;
	int one = 0, five = 0, ten = 0;
	int num;
	for(int i = 0;i < k;i++){
		cin >> num;
		if(num == 1) one++;
		else if(num == 5) five++;
		else if(num == 10) ten++;
	}
	cout << one << endl;
	cout << five << endl;
	cout << ten << endl;
}