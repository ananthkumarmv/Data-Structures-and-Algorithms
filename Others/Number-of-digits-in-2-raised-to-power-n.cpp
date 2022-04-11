#include<iostream>
#include<cmath>

using namespace std;

int countDigits(int n){
	return (n * log10(2) + 1);
}


int main(){
	
	int n;
	cin>>n;
	
	cout<<countDigits(n);

    return 0;
}


