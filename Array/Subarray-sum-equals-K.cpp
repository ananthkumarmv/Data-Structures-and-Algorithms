#include<iostream>
#include<unordered_map>

using namespace std;


// O(n^2)
// O(1)
int subArraySumK(int arr[], int n, int k){
	
	int cnt=0;
	for(int i=0; i<n; i++){
		int sum = 0;

		for(int j=i; j<n; j++){
			sum += arr[j];
			if(sum == k)
				cnt++;
		}
	}
	
	return cnt;
	
}

// O(n)
// O(n)

int subArraySumK2(int arr[], int n, int k){
	
	unordered_map<int, int> mymap;
	
	int cnt=0;
	int currSum=0;
	for(int i=0; i<n; i++){
		
		currSum += arr[i];
		if(currSum == k)
			cnt++;
		
		if(mymap.find(currSum-k) != mymap.end()){
			cnt += mymap[currSum-k];
		}
		
		mymap[currSum]++;
		
	}
	
	return cnt;
	
}


int main(){

	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int k;
	cin>>k;
	
	cout<<subArraySumK2(arr, n, k);

	return 0;
}
