//lookup table method for 32 bit numbers
// O(1)
#include<iostream>

using namespace std;

int table[256];

void initialize(){
	table[0]=0;
	for(int i=1;i<256; i++)
		table[i]=(i&1) + table[i/2];
}

int count(int n){
	initialize();
	int res = table[n&0xff];
	n=n>>8;
	
	res+=table[n&0xff];
	n>>=8;
	
	res+=table[n&0xff];
	n>>=8;
	
	res+=table[n&0xff];
	n>>=8;
	
	return res;
}

int main(){
	cout<<count(15);

	return 0;
}

