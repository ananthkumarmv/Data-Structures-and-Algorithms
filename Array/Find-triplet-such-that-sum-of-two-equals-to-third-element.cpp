#include<iostream>
#include<algorithm>

using namespace std;

void findTriplet(int arr[], int n){
	
	sort(arr, arr+n);
	
	for(int i=n-1; i>=2; i--){
		
		int j = 0;
		int k = i-1;
		
		while(j<k){
			
			if((arr[j]+arr[k]) == arr[i]){
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
				return;
			}
				
			else if((arr[j]+arr[k])>arr[i])
				k--;
			else
				j++;
		}
		
	}
	
	cout<<"Not Found";
	
}

int main(){

	int arr[] = { 5, 32, 1, 7, 10, 50, 19, 21, 2 };
	
	int n = *(&arr + 1) - arr;
	
	findTriplet(arr, n);
	
	return 0;
}
