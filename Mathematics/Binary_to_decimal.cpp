#include<iostream>

using namespace std;

int main() {
	int n, ans=0, base=1;
	cin>>n;
	while(n>0){
		int last_digit = n%10;
		ans = ans+(last_digit*base);
		base*=2;
		n/=10;
	}
	cout<<ans;
    
    return 0;
}


