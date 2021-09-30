#include<iostream>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n;i++) cin>>a[i];
	int c=0;
	for(int i=0; i<n;i++){
		if(a[i]%2==1) c++;
	}
	
	(c%2) ? cout<<"1" : cout<<"2";
	
	return 0;
}

