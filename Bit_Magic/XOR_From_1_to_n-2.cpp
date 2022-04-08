#include<iostream>

#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define z int
#define g string
#define f(i,n) for(z i=0;i<n;i++)
#define ll long long

using namespace std;


z computeXOR(z n){
	if(n%4 == 0)
		return n;
		
	if(n%4 == 1)
		return 1;
		
	if(n%4 == 2)
		return n+1;
		
	return 0;
	
}


int main(){
	FIO;
	
	z n;
	cin>>n;
	
	cout<<computeXOR(n);

    return 0;
}


