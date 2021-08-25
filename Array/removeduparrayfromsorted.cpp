#include<iostream>

// O(n) and space O(n)

using namespace std;

void rev(int *arr, int n){
	int temp[n];
	temp[0]=arr[0];
	int res=1;
	for(int i=1;i<n;i++){
		if(temp[res-1]!=arr[i]){
			temp[res]=arr[i];
			res++;
		}
	}
	for(int i=0;i<res;i++){
		cout<<temp[i]<<" ";
	}
}

int main(){
	int a[]{10, 10,20,20,20,30,30};
	rev(a, 7);

	return 0;
}

