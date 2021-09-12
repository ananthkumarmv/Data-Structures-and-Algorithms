#include<iostream>

// 0(sqrt(n))

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int i=1;
	
	while(i*i<=n) i++;
	
	cout<<i-1;

	return 0;
}

