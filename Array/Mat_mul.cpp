#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
	int n;
	cin>>n;
	vector< vector<int> > a(n, vector<int> (n, 0));
	vector< vector<int> > b(n, vector<int> (n,0));
	vector< vector<int> > r(n, vector<int> (n,0));
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			r[i][j]=0;
			for(int k=0;k<n;k++){
				r[i][j]=r[i][j]+(a[i][k]*a[k][j]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<r[i][j]<<" ";
		}
		cout<<"\n";
	}
    return 0;
}


