#include<iostream>
#include<algorithm>
#include<unordered_set>

using namespace std;

// O(n^2)
// O(1)
void findTriplet2(int arr[], int n, int x){
	
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++){
		
		int l=i+1;
		int r = n-1;
		
		while(l<r){
			
			if((arr[i]+arr[l]+arr[r]) == x){
				cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
				return;
			}
			
			else if((arr[l]+arr[r]<x))
				l++;
			else
				r--;
			
		}
		
	}
	
	cout<<"Not Found";
	
}

// O(n^2)
// O(n)
void findTriplet(int arr[], int n, int x){
	
	for(int i=0; i<n-1; i++){
		
		unordered_set<int> s;
		for(int j=i+1; j<n; j++){
			
			int k = x-(arr[i]+arr[j]);
			
			if(s.find(k) != s.end()){
				cout<<arr[i]<<" "<<k<<" "<<arr[j]<<endl;
				return;
			}
			
			else
				s.insert(arr[j]);
			
		}
		
	}
	
	cout<<"Not Found";
	
}


int main(){

	int arr[] = {1, 4, 45, 6, 10, 8};
	
	int n = *(&arr+1) - arr;
	
	findTriplet(arr, n, 22);

	return 0;
}
