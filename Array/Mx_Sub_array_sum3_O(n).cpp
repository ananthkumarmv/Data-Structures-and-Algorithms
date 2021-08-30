#include<iostream>

//Kadane's Algorithm

using namespace std;

int main(){
	
	int n;
	cin>>n;
	int cs=0;
	int ms=0;
	
	int a[1000];
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
	
	// Kadane's Algorithm for maximum subarray sum
	for(int i=0;i<n;i++){
		cs=cs+a[i];
		
		if(cs<0){
			cs=0;
		}
		ms = max(cs, ms);
		
	}
	
	cout<<ms;
	
	

	return 0;
}

