#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	string s1 ="abc";
	string s2 = "abc";
	if(s1==s2) cout<<"Same";
	else if(s1<s2) cout<<"Smaller";
	else cout<<"Greater";
    
    return 0;
}


