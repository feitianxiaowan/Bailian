// prefixCompress.cpp

#include <iostream>

using namespace std;

int main(){
	int N; cin >> N;
	int count = -1;
	string Ai = "";string Aj;
	for(int i = 0;i < N;i++){
		cin >> Aj;
		int preLenth = 0;
		for(int j = 0;j < Aj.size() && j < Ai.size();j++){
			if(Ai[j] != Aj[j]) break;
			else preLenth++;
		}
		// cout << endl << preLenth;
		count += Aj.size() - preLenth + 1;
		Ai = Aj;
	}
	cout << count << endl;
}