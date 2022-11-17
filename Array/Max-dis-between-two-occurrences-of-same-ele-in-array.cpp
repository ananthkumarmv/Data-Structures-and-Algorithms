#include<iostream>
#include<unordered_map>

#define ll long long

using namespace std;

int maxDistance(int arr[], int n){
	
	unordered_map<int, int> um;
	
	int maxi = -1;
	for(int i=0; i<n; i++){
		
		if(um.find(arr[i]) == um.end())
			um[arr[i]] = i;
			
		else{
			
			maxi = max(maxi, i - um[arr[i]]);
			
		}
		
	}
	
	return maxi;
	
}


int main(){
	
	
	int arr[] = {3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << maxDistance(arr, n);

	return 0;
}
