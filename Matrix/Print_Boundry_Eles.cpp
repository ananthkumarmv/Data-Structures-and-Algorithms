#include<iostream>
#include<vector>

using namespace std;

void printBorder(vector< vector<int> > &arr){
	if(arr.size()==1){
		for(int i=0;i<arr[0].size();i++) cout<<arr[0][i]<<" ";
	}
	
	else if(arr[0].size()==1){
		for(int i=0;i<arr.size();i++) cout<<arr[i][0]<<" ";
	}
	else{
		for(int i=0;i<arr[0].size();i++) cout<<arr[0][i]<<" ";
		
		for(int i=1;i<arr.size();i++) cout<<arr[i][arr[0].size()-1]<<" ";
		
		for(int i=arr[0].size()-2; i>=0;i--) cout<<arr[arr.size()-1][i]<<" ";
		
		for(int i=arr.size()-2; i>0;i--) cout<<arr[i][0]<<" ";
	}
	
}



int main(){
	vector< vector<int> > arr;
	
	int m,n;
	cin>>m>>n;
	
	for(int i=0;i<m;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			int k;
			cin>>k;
			v.push_back(k);
		}
		arr.push_back(v);
	}
	
	printBorder(arr);

	return 0;
}

