#include<iostream>
#include <cmath>

using namespace std;

unsigned countBits(unsigned int n){
	return (int)log2(n)+1;
}


int main(){
	
	unsigned int n;
	cin>>n;
	cout<<countBits(n);

    return 0;
}


