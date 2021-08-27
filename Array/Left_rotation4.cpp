#include<iostream>
#include<algorithm>

using namespace std;

// 0(d+n-d+n) = 0(2n) = 0(n)


void reverse(int arr[], int low, int high){
	while(low<high){
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}


void leftr(int arr[], int n, int r){
	reverse(arr, 0, r-1);  //{2,1,3,4,5}
	reverse(arr, r, n-1);  //{2,1,5,4,3}
	reverse(arr, 0, n-1);  //{3,4,5,1,2}
}




int main(){
	int arr[]{1,2,3,4,5};
	leftr(arr, 5, 2);
	for(int i=0;i<5;i++) cout<<arr[i]<<" ";
	return 0;
}


