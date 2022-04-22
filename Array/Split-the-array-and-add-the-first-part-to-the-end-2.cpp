#include<iostream>

using namespace std;

void splitArr(int arr[], int length, int rotation){
	int tmp[length * 2] = {0};
 
    for(int i = 0; i < length; i++)
    {
        tmp[i] = arr[i];
        tmp[i + length] = arr[i];
    }
 
    for(int i = rotation; i < rotation + length; i++)
    {
        arr[i - rotation] = tmp[i];
    }
}


int main(){
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++) cin>>arr[i];
	
	int pos;
	cin>>pos;
	
	splitArr(arr, n, pos);
	
	for (int i = 0; i < n; ++i)
		cout<<arr[i]<<" ";


    return 0;
}


