#include<iostream>

using namespace std;


void merge(int *a, int low, int mid, int high){
	int n1=mid-low+1;
	int n2 = high-mid;
	
	int left[n1], right[n2];
	
	for(int i=0; i<n1;i++) left[i] = a[low+ i];  // a[low+ i] because low can start from middle
	
	for(int i=0; i<n2; i++) right[i] = a[n1+i];
	
	int i=0, j=0, k=0;
	
	while(i<n1 && j<n2){
		if(left[i]<=right[j]){
			a[k]=left[i];
			i++;
			k++;
		}
		
		else{
			a[k]=right[j];
			k++;
			j++;
		}
	}
	
	while(i<n1){
		a[k]=left[i];
		k++;
		i++;
	}
	
	while(j<n2){
		a[k]=right[j];
		k++;
		j++;
	}
	
	
}

int main(){
	
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	merge(a, 0, n/2, n-1);
	
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
	
	return 0;
}

