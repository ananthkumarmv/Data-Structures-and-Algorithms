#include<iostream>
#include<stack>
using namespace std;


// O(n^2)
// O(1)
void printSpan(int arr[], int n){
	
	int span;
	for(int i=0; i<n; i++){
		span = 1;
		for(int j=i-1; j>=0 && arr[j] <= arr[i]; j--)
			span++;
			
		cout<<span<<" ";
	}
}

// O(n)
// O(n)
void printSpan2(int arr[], int n){
	
	stack<int> st;
	
	st.push(0);
	
	cout<<"1 ";
	
	for(int i=1; i<n; i++){
		
		while(!st.empty() && arr[st.top()]<=arr[i])
			st.pop();
			
		int span = (st.empty()) ? i+1 : i - st.top();
		cout<<span<<" ";
		st.push(i);
		
	}
	
}

int main(){
	
	int arr[] = {18, 12, 14, 14, 11, 16};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printSpan2(arr, n);
	return 0;
}
