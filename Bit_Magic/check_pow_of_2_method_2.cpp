#include<iostream>


using namespace std;

bool ispow2(int n){
	//if(n==0) return false;
	//return ((n&(n-1))==0);
	
	return (n!=0) && ((n&(n-1))==0);
}

int main(){
	
	if(ispow2(12)) cout<<"Yes";
	else cout<<"No";

	return 0;
}

