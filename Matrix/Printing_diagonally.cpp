#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int main() {
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	    for(int j=0;j<n;j++)
	       cin>>a[i][j];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int k=0; k<=m-1;k++){
		int i=k;
		int j=0;
		while(i>=0){
			cout<<a[i][j]<<" ";
			i=i-1;
			j=j+1;
		}
		cout<<endl;
	}
	
	for(int k=1;k<=n-1;k++){
		int i=m-1;
		int j=k;
		while(j<=n-1){
			cout<<a[i][j]<<" ";
			i=i-1;
			j=j+1;
		}
		cout<<endl;
	}
    
    return 0;
}


