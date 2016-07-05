// filterSpace.cpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// cin can't read 'space' or2(a cpp program)
int main(){
	char c[200] = {'\0'};
	gets(c);
	string s(c); 
	string::iterator it;
	for(it = s.begin();it != s.end();it++){
		if( ((*it) == ' ') && ((*(it-1)) == ' ') ){
			s.erase(it);
			it--;
		}
	}
	cout << s;
	return 0;
}