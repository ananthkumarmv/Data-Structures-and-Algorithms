#include<bits/stdc++.h>

using namespace std;

int maxSubarrayXOR(int a[], int n){
	
	int ans = INT_MIN;
	
	for(int i=0; i<n; i++){
		
		int curr_xor = 0;
		for(int j=i; j<n; j++){
			curr_xor = curr_xor ^ a[j];
			ans = max(ans, curr_xor);
		}
	}
	
	return ans;
}

int main(){
	
	int arr[] = {8, 1, 2, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Max subarray XOR is " << maxSubarrayXOR(arr, n);
    return 0;
}


