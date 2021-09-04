#include<iostream>
#include<vector>

using namespace std;

void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}


void transposeMat(vector< vector<int> > &arr){
	for(int i=0;i<arr.size();i++){
		for(int j=i+1; j<arr[i].size();j++)
			swap(arr[i][j], arr[j][i]);
	}
}

void print(vector< vector<int> > &arr){
	for(int i=0;i<arr.size();i++){
		for(int j=0; j<arr[i].size();j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	
}


int main(){
	vector< vector<int> > arr;
	
	int m, n;
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
	
	transposeMat(arr);
	print(arr);
	return 0;
}

