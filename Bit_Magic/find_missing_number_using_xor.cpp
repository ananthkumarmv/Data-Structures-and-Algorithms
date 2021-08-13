#include<iostream>


using namespace std;

int main(){
	int a[]{1,2,3,5,6};
	int n=5;
	int x1=a[0];
	for(int i=1;i<n;i++)
		x1^=a[i];
	
	int x2=1;
	for(int i=2;i<=n+1;i++)
		x2^=i;
		
	cout<<(x1^x2);
	

	return 0;
}

