#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;


double avg(int a[], int n){
	int sum=0;
	for(int i=0;i<n;i++) sum+=a[i];
	return sum/double(n);
}



int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<avg(a,n);
    return 0;
}

