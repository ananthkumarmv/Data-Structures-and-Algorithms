#include<iostream>


using namespace std;

bool ispow2(int n){
	if(n==0) return false;
	while(n!=1){
		if(n%2!=0) return false;
		n/=2;
	}
	return true;
}

int main(){
	
	if(ispow2(16)) cout<<"Yes";
	else cout<<"No";

	return 0;
}

