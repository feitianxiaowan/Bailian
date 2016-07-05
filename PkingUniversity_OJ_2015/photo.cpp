// photo.cpp

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N; cin >> N;
	vector<float> male, female;
	for(int i = 0;i < N;i++){
		string s; cin >> s;
		float f; cin >> f;
		if(s[0] == 'm')
			male.push_back(f);
		else 
			female.push_back(f);
	}
	sort(male.begin(),male.end());
	sort(female.begin(),female.end());
	for(int i = 0;i < male.size();i++)
		cout << male[i] << ' ';
	for(int i = female.size() - 1;i >= 0;i--)
		cout << female[i] << ' ';
	return 0;
}