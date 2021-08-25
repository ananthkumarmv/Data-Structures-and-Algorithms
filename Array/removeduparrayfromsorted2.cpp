#include<iostream>

// O(n) and space O(1)

using namespace std;


void rev(int *arr, int n){
	int res=1;
	for(int i=1;i<n;i++){
		if(arr[res-1]!=arr[i]){
			arr[res] = arr[i];
			res++;
		}
	}
	for(int i=0;i<res;i++){
		cout<<arr[i]<<" ";
	}
}


int main(){
	int a[]{10, 10,20,20,20,30,30};
	rev(a, 7);

	return 0;
}



