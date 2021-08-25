#include<iostream>


using namespace std;


void leftr(int *arr, int n, int r){
	if(r>n) r%=n;
    for(int i=0;i<n;i++){
        cout<<arr[(r+i)%n]<<" ";
    }
}

int main(){
	int arr[]{1,2,3,4,5};
	leftr(arr, 5, 3);

	return 0;
}

