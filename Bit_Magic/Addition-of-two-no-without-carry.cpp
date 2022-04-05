#include<iostream>

using namespace std;


int xSum(int n, int m){
	
	int res = 0;
	int bit_sum;
	int multiplier = 1;
	
	while(n || m){
		
		bit_sum = (n %10) + (m % 10);
		
		// neglecting carry
		bit_sum %= 10;
		
		res = (bit_sum * multiplier) + res;
		
		n /= 10;
		m /= 10;
		
		multiplier *= 10;
	}
	
	return res;
}


int main(){
	
	int n = 456;
	int m = 854;
	cout<<xSum(n, m);


    return 0;
}


