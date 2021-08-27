#include<iostream>
#include<algorithm>

using namespace std;


void freq(int *arr, int n){
	int freq=1, i=1;
	sort(arr, arr+n);
	while(i<n){
		while(i<n && arr[i]==arr[i-1]){
			freq++;
			i++;
		}
		cout<<arr[i-1]<<" "<<freq<<endl;
		i++;
		freq=1;
	}
	if(n==1||arr[n-1]!=arr[n-2]) cout<<arr[n-1]<<" "<<1;
}

int main(){
	int arr[]{10,20,40,10,20,30,30,40,10,50};
	int n = sizeof(arr)/sizeof(arr[0]);
	freq(arr, n);

	return 0;
}

