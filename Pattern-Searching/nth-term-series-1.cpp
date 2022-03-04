//Find Nth term of the series 1, 8, 54, 384...

#include<iostream>

using namespace std;

int fact(int n){
	int product=1;
	
	for(int i=1; i<=n; i++){
		product *= i;
	}
	return product;
}


int nthTerm(int n){
	return (n*n) * fact(n);
}


int main(){
	
	int n;
	cin>>n;
	
	cout<<nthTerm(n);

    return 0;
}


