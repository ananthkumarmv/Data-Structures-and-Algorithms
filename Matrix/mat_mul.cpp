#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
	int n, k=1;
	cin>>n;
	vector<vector<int> > matA(n, vector<int> (n,0));
	vector<vector<int>> matB(n, vector<int> (n,0));
	vector<vector<int>> res(n, vector<int> (n,0));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			matA[i][j]=k++;
		}
	}
	
	k=1;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			matB[i][j]=k++;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			res[i][j]=0;
			for(int k=0;k<n;k++){
				res[i][j]=res[i][j]+(matA[i][k]*matB[k][j]);
			}
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matA[i][j]<<" ";
		}
		cout<<"\n";
		
	}
	
	cout<<"\n";
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matB[i][j]<<" ";
		}
		cout<<"\n";
		
	}
	
	cout<<"\n";
	cout<<"matrix mul is:";
	cout<<"\n";
    
    
    for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
		
	}
    
    
    return 0;
}


