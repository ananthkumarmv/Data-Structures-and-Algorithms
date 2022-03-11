#include<iostream>

using namespace std;

int fact(int n){
	int f=1;
	for(int i=1; i<=n; i++){
		f = f*i;
	}
	return f;
}

int nthTerm(int N)
{
    return (fact(N) * (N + 2) / 2);
}

int main(){
	int n;
	cin>>n;
	
	cout<<nthTerm(n);
    return 0;
}


