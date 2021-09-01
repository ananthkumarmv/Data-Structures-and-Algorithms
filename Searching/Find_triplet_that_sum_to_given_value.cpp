#include<iostream>


using namespace std;



bool find3Numbers(int *a, int n, int sum){
	
	for(int i=0;i<n-2;i++){
		for(int j=i+1; j<n-1; j++){
			for(int k=j+1; k<n;k++){
				if(a[i]+a[j]+a[k]==sum)
					return true;
			}
		}
	}
	return false;
}




int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
    cout<<find3Numbers(A, arr_size, sum);
    return 0;
}
