#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

int count_distinct(int a[], int n){
	int count=0;
	bool isDist=true;
	for(int i=0;i<n;i++){
		isDist = true;
		for(int j=i-1;j>=0;j--){
			if(a[i]==a[j]){
				isDist = false;
				break;
			}
		}
		if(isDist==true) count++;
	}
	return count;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<count_distinct(a,n);
    return 0;
}

