#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int countDigit(int n){
	if(n==0) 
		return 0;
	return 1 + countDigit(n/10);
}


int main() {
	int n, count=0;
	cin>>n;
	cout<<countDigit(n)<<endl;
	return 0;
}



