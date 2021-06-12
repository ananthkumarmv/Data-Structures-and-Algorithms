#include<bits/stdc++.h>
typedef long long ll;
using namespace std;



void subarray(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<a[k]<< " ";
			}
			cout<<endl;
		}
	}
}

int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	subarray(a,n);
	return 0;
}

