#include<iostream>


// 0(nd)
using namespace std;

void leftr(int *arr, int n, int r){
	if(r>n) r%=n;
    
    for(int i=1;i<=r;i++){
    	int temp=arr[0];
    	for(int j=0;j<n-1;j++){
    		arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
	int arr[]{1,2,3,4,5};
	leftr(arr, 5, 3);

	return 0;
}


