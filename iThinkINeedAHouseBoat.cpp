// iThinkINeedAHouseBoat.cpp

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	int N; cin >> N;
	for(int i = 0;i < N;i++){
		double x, y; cin >> x >> y;
		int years = floor( 3.141592654 * (x*x + y*y) / 100) + 1;
		cout << "Property " << i + 1 << ": This property will begin eroding in year " << years << "." << endl;
	}
	cout << "END OF OUTPUT." << endl;

}