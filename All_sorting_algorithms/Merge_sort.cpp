#include<iostream>

using namespace std;

void print_array(int a[],int n){
	cout<<"The sorted array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

void merge(int a[], int low, int mid, int high){
	int temp_a[100];
	int i=low;
	int j=mid+1;
	int k=low;
	
	while(i<=mid && j<= high){
		if(a[i]<a[j]){
			temp_a[k++]=a[i++];
		}
		else{
			temp_a[k++]=a[j++];
		}
	}
	while(i<=mid){
		temp_a[k++]=a[i++];
	}
	
	while(j<=high){
		temp_a[k++]=a[j++];
	}
	
	
	for(int r=0;r<=high; r++) a[r] = temp_a[r];
}


int merge_sort(int a[],int low, int high){
	int mid=0;
	if(low<high){
		mid=low+(high-low)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
		
	}
}



int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<endl;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<endl;
    merge_sort(a,0,n-1);
    print_array(a,n);
    return 0;
}

