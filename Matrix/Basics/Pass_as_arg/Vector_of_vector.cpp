#include<iostream>
#include<vector>
#define ll long long

using namespace std;

void print(vector<vector<int>> &arr){
	for(int i=0; i<arr.size();i++){
		for(int j=0;j<arr[i].size(); j++)
			cout<<arr[i][j]<<" ";
		cout<<"\n";
	}
}



int main() {
	int m=3, n=2;
	vector<vector<int>> arr;       //creating vector of vector
	for(int i=0; i<m; i++){
		vector<int> v;            //creating individual rows
		for(int j=0;j<n;j++)
			v.push_back(i);       //filling the rows
		arr.push_back(v);         //adding main row to vector
	}
	print(arr);
    
    return 0;
}


