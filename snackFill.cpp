// snackFill.cpp

#include <iostream>

using namespace std;

int main(){
	int N; N = 4;
	// cin >> N;
	int **R = new int*[N];
	for(int i = 0;i < N;i++){
		int *temp = new int[N];
		R[i] = temp;
	}
	int count = 1;
	for(int i = 0;i < 2*N-1;i++){
		if(i % 2 == 0)
			for(int j = 0;j < N;j++){
				if(i-j >= 0 && i-j < N){
					R[i-j][j] = count;
					count++;
				}
			}
		else
			for(int j = N-1;j >= 0;j--){
				if(i-j >= 0 && i-j < N){
					R[i-j][j] = count;
					count++;
				}
			}
	}
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++)
			cout << R[i][j] <<' ';
		cout << endl;
	}
	return 0;

}