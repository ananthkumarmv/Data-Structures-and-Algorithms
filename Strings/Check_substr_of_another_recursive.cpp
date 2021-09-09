#include<iostream>

// 0(n+m)
// 0(n+m)

using namespace std;


bool substring(string &s1, string &s2, int n, int m){
	if(m==0) return true;
	
	if(n==0) return false;
	
	if(s1[n-1]==s2[m-1]) 
		return substring(s1, s2, n-1, m-1);
	else 
		return substring(s1, s2, n-1, m);
}



int main(){
	
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	
	substring(s1, s2, s1.length(), s2.length()) ? cout<<"Yes!" : cout<<"No";
	
	return 0;
}

