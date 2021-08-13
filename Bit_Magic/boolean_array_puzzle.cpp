#include<iostream>


using namespace std;

int main(){
	int a[]{1,0};
	a[0]=a[a[0]];
	a[1]=a[0];
	
	//method-2
	//a[a[1]] = a[a[0]];
	
	cout<<a[0]<<" "<<a[1];

	return 0;
}

