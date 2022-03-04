//Find Nth term of the series 0, 2, 4, 8, 12, 18...
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


