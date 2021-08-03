#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	string s ="1000";
	int sum=0, base=1;
	
	for(int i=s.length()-1;i>=0;i--){
		sum=sum+((int)(s[i]-'0')*base);
		base*=2;
	}
	cout<<sum;
    
    return 0;
}


