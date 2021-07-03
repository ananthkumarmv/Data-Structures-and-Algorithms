#include<iostream>
#include<algorithm>
#define ll long long

using namespace std;

bool checksort(int a[], int n){
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]) return false;
	}
	return true;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(checksort(a,n)) cout<<"Yes!";
	else cout<<"No, it's not.. :(";
    
    return 0;
}


