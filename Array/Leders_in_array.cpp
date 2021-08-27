#include<iostream>


using namespace std;


// 0(n^2)

void leaders(int *arr, int n){
	for(int i=0;i<n;i++){
		bool flag=false;
		for(int j=i+1; j<n;j++){
			if(arr[i]<=arr[j]){
				flag = true;
				break;
			}
		}
		if(flag==false) cout<<arr[i]<<" ";
	}
}




int main(){
	
	int arr[]{4,8,7,5,7,5,4,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	leaders(arr, n);
	return 0;
}

