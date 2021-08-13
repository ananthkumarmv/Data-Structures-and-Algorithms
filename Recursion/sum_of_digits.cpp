#include<iostream>


using namespace std;

int sumofdigits(int n){
//	if(n==0) return 0;
	if(n<=9) return n;
	
	return sumofdigits(n/10) + n%10;
}

int main(){
	
	cout<<sumofdigits(552);
	

	return 0;
}

