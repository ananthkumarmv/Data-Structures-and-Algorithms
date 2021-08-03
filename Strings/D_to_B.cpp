#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	int n;
	cin>>n;
	string s="";
	while(n>0){
		int t = n%2;
		s+=to_string(t);
		n=n/2;
	}
    
    reverse(s.begin(), s.end());
    cout<<s;
    
    return 0;
}



