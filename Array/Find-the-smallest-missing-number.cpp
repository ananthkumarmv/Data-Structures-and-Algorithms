#include<iostream>

using namespace std;

// O(n)
// O(1)
void findFirstMissing(int arr[], int n, int m){
	
	int mNum = -1;
	for(int i=0; i<n; i++){
		if(i != arr[i]){
			mNum = i;
			break;
		}
	}
	
	cout<<mNum;
	
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	findFirstMissing(arr, n, arr[n-1]+1);

	return 0;
}
