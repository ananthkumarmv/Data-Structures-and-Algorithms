#include<iostream>

using namespace std;

int computeXOR(int n){
	
	switch(n&3){
		case 0: return n;
		
		case 1: return 1;
		
		case 2: return n+1;
		
		case 3: return 0;
	}	
}

int main(){
	int n;
	cin>>n;
	
	cout<<computeXOR(n);
	
	return 0;
}

