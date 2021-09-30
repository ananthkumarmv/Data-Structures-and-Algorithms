#include<iostream>

using namespace std;


void addOne(int x){
	int m=1;
	
	// flip all the set bits 
	//until we find a 0
	
	while(x & m){
		x=x^m;
		m<<=1;
	}
	
	cout<<(x^m);	
}


int main(){
	
	int n;
	cin>>n;
	addOne(n);

	return 0;
}

