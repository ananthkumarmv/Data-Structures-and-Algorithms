#include<iostream>

using namespace std;

unsigned int countBits(unsigned int n){
	unsigned int count = 0;
	while(n){
		count++;
		n >>= 1;
	}
	
	return count;
}


int main(){
	unsigned int n;
	cin>>n;
	cout<<countBits(n);

    return 0;
}


