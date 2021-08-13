#include<iostream>


using namespace std;

int getsum(int n){
	if(n==0) return 0;
	
	return n+getsum(n-1);
}

int main(){
	cout<<getsum(4);

	return 0;
}

