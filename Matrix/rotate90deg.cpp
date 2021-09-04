#include<iostream>

//0(n^2)
//0(n^2)

using namespace std;


void rotate90deg(vector< vector<int> > &arr){
	
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
	
	rotate90deg(arr);
	print(arr);
	
	return 0;
}
 
