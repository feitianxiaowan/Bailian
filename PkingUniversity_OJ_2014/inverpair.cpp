// inverpair.cpp

#include <iostream>

using namespace std;

// O(n^2), there may be better methods
int main(){
	int N; cin >> N;
	while(N != 0){
		int count = 0;
		int *num = new int[N];
		for(int i = 0;i < N;i++){
			cin >> num[i];
		}
		for(int i = 0;i < N-1;i++){
			for(int j = i+1;j < N;j++){
				if(num[i] > num[j])
					count++;
			}
		}
		cout << count;
		cin >> N;
	}
	return 0;
}