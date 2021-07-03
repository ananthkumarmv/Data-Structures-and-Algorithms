#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long

using namespace std;

int countDigit(int n){
	
	return floor(log10(n)+1);
}


int main() {
	int n, count=0;
	cin>>n;
	cout<<countDigit(n)<<endl;
	return 0;
}
