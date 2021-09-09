#include<iostream>
#include <cstring>

// 0(n+m)
// 0(1)

using namespace std;


int main(){
	
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	int j=0;
	for(int i=0;i<s1.length() && j<s2.length();i++){
		if(s1[i]==s2[j]) j++;
	}
	
	cout<<(j==s2.length());
	
	return 0;
}

