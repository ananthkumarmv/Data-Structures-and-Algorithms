#include<iostream>

using namespace std;

void bin(unsigned n){
	
	// unsigned integer (32 bit), which consist of 0-31 bits.
	for(unsigned i =  1 << 31; i > 0; i = i / 2)
		(n & i) ? cout<<"1" : cout<<"0";
}


int main(){
	
	bin(7);
	cout<<"\n";
	bin(4);

    return 0;
}


