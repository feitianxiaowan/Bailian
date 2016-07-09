// biorhythms.cpp

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	int N = 1;
	int p, e, i, d; 
	while(cin >> p >> e >> i >> d){
		if(p == -1 && e== -1 && i == -1 && d == -1) break;
		int days = d + 1;
		// for(;days < 21252;days++) 
		// 	if((days - p) % 23 == 0) 
		// 		break;
		// for(;days < 21252;days += 23) 
		// 	if((days - e) % 28 == 0) 
		// 		break;
		// for(;days < 21252;days += 23*28) 
		// 	if((days - i) % 33 == 0) 
		// 		break;
		printf("Case %d: the next triple peak occurs in %d days.\n", N++, days - d);
	}
	return 0;
}