#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<vector<int> > a(n, vector<int> (n,0));  //(rows, clos with all eles zero)
	vector<vector<int> > b(n, vector<int> (n,0));
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		int t;
    		cin>>t;
    		a[i][j]=t;
		}
	}
	
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    	     cout<<a[i][j]<<" ";
    	}
    	cout<<"\n";
	}
	
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++)
    	     b[i][j]=a[j][i];
	}
	
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    	     cout<<b[i][j]<<" ";
    	}
    	cout<<"\n";
	}
    return 0;
}



