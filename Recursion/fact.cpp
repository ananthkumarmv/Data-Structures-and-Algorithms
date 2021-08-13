#include<iostream>


using namespace std;

// Non-tail recursive

//int rec(int n){
//	if(n==0 || n==1) return 1;

//	return n*rec(n-1);
//}

// Tail recursive

int rec(int n, int k){
	if(n==0 || n==1) return k;
	
	return rec(n-1, k*n);
}

int main(){
	cout<<rec(5,1);

	return 0;
}

