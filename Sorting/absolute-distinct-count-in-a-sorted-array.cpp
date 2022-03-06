//Input: [-3, -2, 0, 3, 4, 5]
//Output: 5
//There are 5 distinct absolute values
//among the elements of this array, i.e.
//0, 2, 3, 4 and 5)
//Input: [-1, -1, -1, -1, 0, 1, 1, 1, 1]
//Output: 2
//Input: [-1, -1, -1, -1, 0]
//Output: 2
//Input: [0, 0, 0]
//Output: 1


#include<bits/stdc++.h>

using namespace std;


int distinctCount(int arr[], int n){
	unordered_set<int> s;
	
	//set keeps only one 
	//copy even if we try to insert
	//multiple values
	for(int i=0; i<n; i++)
		s.insert(abs(arr[i]));
		
	return s.size();
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++) cin>>arr[i];
	
	cout<<distinctCount(arr, n);


    return 0;
}


