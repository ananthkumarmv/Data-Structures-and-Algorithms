#include<iostream>
#include<vector>
#define ll long long

using namespace std;

int main() {
	int m=3, n=2;
	vector<int> arr[m];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		arr[i].push_back(i);
		
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
		
    
    return 0;
}


