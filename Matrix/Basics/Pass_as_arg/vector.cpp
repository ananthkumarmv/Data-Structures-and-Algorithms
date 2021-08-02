#include<iostream>
#include<vector>
#define ll long long

using namespace std;

void print(vector<int> arr[], int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<arr[i].size(); i++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
}


int main() {
	
	int m=3, n=2;
	vector<int> arr[m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i].push_back(i);
		}
	}
	
	print(arr, m);
    
    return 0;
}


