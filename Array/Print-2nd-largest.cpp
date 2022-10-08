#include<iostream>
#include<algorithm>
using namespace std;

// O(n)
// O(1)
void print2ndLargest(int arr[], int n){
	
	int first, second;
	
	if(n<2)
		return;
	
	second = first = INT_MIN;
	
	for(int i=0; i<n; i++){
		
		if(arr[i] > first){
			second = first;
			first = arr[i];
		}
		
		else if(arr[i] > second && arr[i] != first){
			second = arr[i];
		}
	}
	
	if(second == INT_MIN)
		cout<<"\nThere is no second largest element";
	else
		cout<<second;
	
}

// O(nlogn)
// O(1)
void print2ndLargest2(int arr[], int n){
	
	int first, second;
	
    if (n < 2) {
        printf(" Invalid Input ");
        return;
    }
    
    sort(arr, arr+n);
    
    // start from the second last as last ele
    // is the largest
    
    for(int i=n-2; i>=0; i++){
    	if(arr[i] != arr[n-1]){
    		cout<<"\n"<<second;
    		return;
		}
    		
	}
	
	cout<<"There is no second largest element\n";
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	print2ndLargest(arr, n);
	print2ndLargest2(arr, n);
	return 0;
}
