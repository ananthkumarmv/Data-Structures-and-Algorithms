#include<iostream>
#include<vector>

using namespace std;

void search(vector< vector<int>> &mat, int key){
	int i=0, j=mat[0].size()-1;
	
	while(i<mat.size() && j>=0){
		if(mat[i][j]==key){
			cout<<"Found at "<<i<<", "<<j;
			return;
		}
		
		else if (mat[i][j]>key) 
				j--;
		
		else i++;
	}
	
	cout<<"Not Found";
}


int main(){
	vector< vector<int>> mat;
	int m, n, key;
	cin>>m>>n;
	for(int i=0; i<m; i++){
		vector<int> v;
		for(int j=0; j<n; j++){
			int k;
			cin>>k;
			v.push_back(k);
		}
		mat.push_back(v);
	}
	
	cin>>key;
	search(mat, key);


    return 0;
}


