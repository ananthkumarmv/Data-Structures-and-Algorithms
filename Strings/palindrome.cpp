#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	string s1="anan";
	string s2;
	
	int l=s1.length()-1;
	
	while(l>=0){
		s2+=s1[l];
		l--;
	}
	
	if(s2==s1) cout<<"Palindrome";
	else cout<<"Not a Palindrome";
	
    return 0;
}


