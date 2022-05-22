#include<iostream>

using namespace std;

int main(){
	
	int a=0, b=1, sum=0, t, j;
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<a<<" ";
			sum = a+b;
			t=b;
			b=sum;
			a=t;
		}
		cout<<endl;
	}


    return 0;
}


