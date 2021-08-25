#include<iostream>

// O(n) and space O(1)

using namespace std;


void moveztoend(int *arr, int n){
	int count = 0;
	
	for(int i=0;i<n;i++){
		if(arr[i]!=0)
			arr[count++] = arr[i];
	}
	
	while(count<n){
		arr[count++]=0;
	}
	
	for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
	}
}


int main(){
	int a[]{1,2,0,1,0,3,0};
	moveztoend(a, 7);

	return 0;
}

