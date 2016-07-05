// 2Dvector.cpp

#include <iostream>
#include <vector>

using namespace std;

int main(){
	int m,n;
	cin >> m >> n;
	vector< vector<int> > vv(m,vector<int>(n,0));
	for(int i = 0;i < m;i++)
		for(int j = 0;j < n;j++)
			cin >> vv[i][j];

	for(int i = 0;i < n+m-1;i++){
		for(int j = 0;j < m;j++){
			if(i - j >= 0 && i - j < n)
				cout << vv[j][i-j] << endl;
		}
	}
	return 0;
}