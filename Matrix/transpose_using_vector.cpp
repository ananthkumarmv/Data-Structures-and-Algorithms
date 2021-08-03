#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
	int n, k=1;
	cin>>n;
	vector<vector<int> > vec(n, vector<int> (n,0));
	vector<vector<int>> ans(n, vector<int> (n,0));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			vec[i][j]=k++;
		}
	}
	
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			ans[i][j]=vec[j][i];
		}
		
	}
	
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<"\n";
		
	}
	
	cout<<"\n";
	cout<<"Transpose of the matrix is:\n";
	
	for(int i=0; i<n;i++){
		for(int j=0; j<n; j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
		
	}
	
	
    
    return 0;
}


