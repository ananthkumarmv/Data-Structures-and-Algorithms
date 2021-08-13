#include<iostream>


using namespace std;

void fn(int n){
	if(n==0) return;
	
	cout<<n<<endl;
	fn(n-1);
	cout<<n<<endl;
}

int main(){
	
	fn(3);

	return 0;
}

