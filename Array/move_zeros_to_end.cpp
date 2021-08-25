#include<iostream>
#include<algorithm>

// O(n) and space O(1)

using namespace std;


void moveztoend(int *arr, int n){
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			for(int j=i+1; j<n;j++){
				if(arr[j]!=0)
					arr[i]=arr[j];
					arr[j]=0;
					break;
			}
		}
	}
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}


int main(){
	int a[]{1,2,0,1,0,3,0};
	moveztoend(a, 7);

	return 0;
}

