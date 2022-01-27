#include<iostream>
#include<algorithm>
using namespace std;

// O((m+n)*log(m+n))
// 0(m+n)


void merge(int *a, int *b, int m, int n){
	int c[m+n];
	
	for(int i=0;i<m;i++)
		c[i]=a[i];
		
	for(int i=0;i<n;i++) 
		c[m+i]=b[i];
	
	sort(c, c+m+n);
	
	for(int i=0;i<m+n;i++) cout<<c[i]<<" ";
}

int main(){
	
	int m, n;
	cin>>m>>n;
	
	int a[m], b[n];
	for(int i=0; i<m; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];
	
	merge(a, b, m, n);
	
	return 0;
}

