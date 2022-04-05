#include<iostream>

using namespace std;


int setEvenBits(int n){
	int count = 0;
	int res = 0;
	
	for(int temp = n; temp >0; temp >>= 1){
		// if bit is odd then generate
		// number and or with res
		if(count % 2 == 1)
			res = res | (1 << count);
		count++;
	}
	
	return (n & res);
	
}

int setOddBits(int n){
	int count = 0;
	int res = 0;
	
	for(int temp = n; temp >0; temp >>= 1){
		// if bit is even then generate
		// number and or with res
		if(count % 2 == 0)
			res = res | (1 << count);
		count++;
	}
	
	return (n & res);
	
}


int getAlternateBits(int n, int m){
	
	// setting even bit of number n
	int tempn = setEvenBits(n);
	
	// setting odd bit of number m
	int tempm = setOddBits(m);
	
	// taking OR with these number
	return (tempn | tempm);
}


int main(){
	
	int n = 20;
	int m = 7;
	
	cout<<getAlternateBits(n, m);

    return 0;
}


