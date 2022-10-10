#include<iostream>
#include<stack>

using namespace std;


// O(n^2)
// O(1)
void printPGE(int arr[], int n){
	
	for(int i=0; i<n; i++){
		
		int j;
		for(j=i-1; j>=0; j--){
			if(arr[j]>arr[i]){
				cout<<arr[j]<<" ";
				break;
			}
		}
		if(j == -1)
			cout<<"-1 ";
	}
	
}


// O(n)
// O(n)
void printPGE2(int arr[], int n){
	
	stack<int> st;
	
	st.push(arr[0]);
	cout<<"-1 ";
	
	for(int i=1; i<n; i++){
		
		while(!st.empty() && st.top() <= arr[i])
			st.pop();
			
		int pg  = (st.empty()) ? -1 : st.top();
		
		cout<<pg<<" ";
		
		st.push(arr[i]);
		
	}
	
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	printPGE2(arr, n);
	
	return 0;
}
