#include<iostream>
#include<vector>

using namespace std;

void spiralTraversal(vector< vector<int> > &mat){
	int top=0, bottom= mat.size()-1, right=mat[0].size()-1, left=0;
	
	while(top<=bottom && left<=right){
		
		// Top row
		for(int i=left; i<=right; i++)
			cout<<mat[top][i]<<" ";
		top++;
		
		// Right column
		for(int i=top; i<=bottom; i++)
			cout<<mat[i][right]<<" ";
		right--;
		
		// Bottom row
		if(top<=bottom){
			for(int i=right; i>=left; i--)
				cout<<mat[bottom][i]<<" ";
			bottom--;
		}
		
		if(left<=right){
			for(int i=bottom; i>=top; i--)
				cout<<mat[i][left]<<" ";
			left++;
		}	
	}
}



int main(){
	vector< vector<int> > mat;
	
	int m,n;
	cin>>m>>n;
	
	for(int i=0;i<m;i++){
		vector<int> v;
		for(int j=0;j<n;j++){
			int k;
			cin>>k;
			v.push_back(k);
		}
		mat.push_back(v);
	}
	
	spiralTraversal(mat);

	return 0;
}

