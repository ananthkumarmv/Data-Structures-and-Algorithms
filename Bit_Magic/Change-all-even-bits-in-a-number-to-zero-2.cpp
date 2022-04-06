#include<iostream>

using namespace std;

int changeEvenBitToOne(int n){
	
	int a=1;
    for(int i=0;i<32;i=i+2){
        n=n&(~(a<<i));
    }
    return n;
	
}

int main(){
	
	int n;
	cin>>n;
	cout<<changeEvenBitToOne(n);

    return 0;
}

