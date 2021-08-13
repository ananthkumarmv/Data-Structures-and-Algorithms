#include<iostream>


using namespace std;

void fn(int n){
	if(n==0) return;
	
	fn(n-1);
	cout<<n<<endl;
	fn(n-1);
}

int main(){
	
	fn(3);

	return 0;
}

