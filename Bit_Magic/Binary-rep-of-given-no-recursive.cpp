#include<iostream>

using namespace std;


void bin(unsigned n){
	if(n>1)
		bin(n/2);
	
	cout<<n%2;
}


int main(){
	bin(7);
	cout<<"\n";
	bin(4);

    return 0;
}


