#include<iostream>
#include<unordered_set>
#include<algorithm>

using namespace std;


// O(n^2)
// O(1)
void findTriplets3(int arr[], int n){
	
	sort(arr, arr+n);
	
	bool flag = false;
	for(int i=0; i<n-1; i++){
		
		int l=i+1;
		int r = n-1;
		
		while(l<r){
			
			if((arr[i]+arr[l]+arr[r]) == 0){
				
				cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
				
				l++;
				r--;
				flag = true;
			}
			
			else if((arr[i]+arr[l]+arr[r]) < 0)
				l++;
			else
				r--;
			
		}
		
	}
	
	if(!flag)
		cout<<"No Triplets Found";
	
}

// O(n^2)
// O(n)
void findTriplets2(int arr[], int n){
	
	bool flag = false;
	for(int i=0; i<n-1; i++){
		
		unordered_set<int> s;
		for(int j=i+1; j<n; j++){
			
			int x = -(arr[i]+arr[j]);
			
			if(s.find(x) != s.end()){
				cout<<arr[i]<<" "<<x<<" "<<arr[j]<<endl;
				flag = true;
			}
			else
				s.insert(arr[j]);
			
		}
		
	}
	
	if(!flag)
		cout<<"No Triplets Found";
	
}


// O(n^3)
// O(1)
void findTriplets(int arr[], int n){
	
	bool flag = false;
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			for(int k=j+1; k<n; k++){
				if((arr[i]+arr[j]+arr[k]) == 0){
					
					cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
					flag = true;
					
				}
			}
		}
		
	}
	
	if(flag == false)
		cout<<"No Triplet Found";
	
}

int main(){

	int arr[] = { 0, -1, 2, -3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets3(arr, n);

	return 0;
}
