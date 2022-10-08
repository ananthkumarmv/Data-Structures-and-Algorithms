#include<iostream>


using namespace std;

// O(n)
// O(n)
void leftr1(int *arr, int n, int r){
	if(r>n) r%=n;
    for(int i=0;i<n;i++){
        cout<<arr[(r+i)%n]<<" ";
    }
}

// O(n*r)
// O(1)
void leftr2(int *arr, int n, int r){
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

//0(r+n-r+r) = 0(n-r)
//space 0(d)
void leftr3(int *arr, int n, int r){
	int temp[r];
	for(int i=0; i<r; i++)
		temp[i] = arr[i];
	
	for(int i=r; i<n; i++)
		arr[i-r] = arr[i];
		
	for(int i=0; i<r; i++)
		arr[n-r+i] = temp[i];
	
	for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


// 0(nr)
// 0(1)

void leftrotate(int *arr, int n){
	int temp = arr[0];
	for(int i=0;i<n;i++)
		arr[i-1] = arr[i];
	arr[n-1]=temp;
}


void leftr4(int *arr, int n, int r){
	for(int i=0;i<r;i++) 
		leftrotate(arr, n);
}


// 0(d+n-d+n) = 0(2n) = 0(n)


void reverse(int arr[], int low, int high){
	while(low<high){
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}


void leftr5(int arr[], int n, int r){
	reverse(arr, 0, r-1);  //{2,1,3,4,5}
	reverse(arr, r, n-1);  //{2,1,5,4,3}
	reverse(arr, 0, n-1);  //{3,4,5,1,2}
}

int main(){
	int arr[]{1,2,3,4,5};
	leftr(arr, 5, 3);

	return 0;
}

