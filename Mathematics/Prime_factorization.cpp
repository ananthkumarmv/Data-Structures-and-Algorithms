#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}

void prime_factors(int n){
	int f=0;
	for(int i=2;i<=sqrt(n);i++){
		if(isPrime(i)){
			int x=i;
			while(n%x==0){
				cout<<i<<" ";
				x=x*i;
				f=1;
			}
		}
	}
	if(f==0) cout<<n;
}

int main() {
	int n;
	cin>>n;
	prime_factors(n);
    return 0;
}


