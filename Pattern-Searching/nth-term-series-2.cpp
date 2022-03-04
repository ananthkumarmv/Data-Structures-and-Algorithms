#include<iostream>

using namespace std;


int nthTerm(int n){
	return (n + n*(n-1))/2;
}

int main(){
	int n;
	cin>>n;
	
	cout<<nthTerm(n);


    return 0;
}


