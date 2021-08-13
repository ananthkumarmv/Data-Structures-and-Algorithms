#include<iostream>


using namespace std;

void fun(int n, int k){
	if(n==0) return;
	
	cout<<k;
	fun(n-1, k+1);
}

int main(){
	fun(4, 1);

	return 0;
}

