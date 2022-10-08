#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void deleteElements(int arr[], int n, int k){
	
	stack<int> st;
	int count=0;
	st.push(arr[0]);
	
	for(int i=1; i<n ;i++){
		
		while(!st.empty() && st.top() < arr[i] && count < k){
			
			count++;
			st.pop();
			
		}
		
		st.push(arr[i]);
		
	}
	
	int m = st.size();
	
	vector<int> v(m);    // size of the vector is m;
	
	while(!st.empty()){
		v[--m] = st.top();
		st.pop();
	}
	
	for(auto x : v)
		cout<<x<<" ";
		
	
}

int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int k;
	cin>>k;
	
	deleteElements(arr, n, k);

	return 0;
}
