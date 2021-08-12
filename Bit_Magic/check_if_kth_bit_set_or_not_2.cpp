#include<iostream>


using namespace std;

void func(int n, int k){
	if((n>>(k-1)&1)==1) cout<<"Yes";
	else cout<<"No";
}

int main(){
	
	func(13, 3);

	return 0;
}

