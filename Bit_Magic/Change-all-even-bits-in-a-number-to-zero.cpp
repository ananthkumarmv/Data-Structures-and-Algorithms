#include<iostream>

using namespace std;

int changeEvenBitToOne(int n){
	
	return (n & 0xaaaaaaaa);
	
}

int main(){
	
	int n;
	cin>>n;
	cout<<changeEvenBitToOne(n);

    return 0;
}

