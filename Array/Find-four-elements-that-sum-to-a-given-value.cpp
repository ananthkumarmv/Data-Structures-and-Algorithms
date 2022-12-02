#include<iostream>
#include<algorithm>

using namespace std;

void find4Numbers(int arr[], int n, int x){
	
	sort(arr, arr+n);
	
	for(int i=0; i<n-3; i++){
		for(int j=i+1; j<n-2; j++){
			int l = j+1;
			int r = n-1;
			
			while(l<r){
				if((arr[i]+arr[j]+arr[l]+arr[r]) == x){
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[l]<<" "<<arr[r]<<" ";
					return;
				}
				else if((arr[i]+arr[j]+arr[l]+arr[r]) > x)
					r--;
				else
					l++;
			}
			
		}
		
	}
	
	cout<<"Not found";
	
}

int main(){

	int arr[] = {1, 4, 45, 6, 10, 12};
	int n = *(&arr + 1) - arr;
	
	find4Numbers(arr, n, 21);

	return 0;
}
