#include<iostream>


using namespace std;

void func(int n, int k){
	if(n&(1<<(k-1))!=0) cout<<"Yes";
	else cout<<"No";
}

int main(){
	
	func(5, 3);

	return 0;
}

