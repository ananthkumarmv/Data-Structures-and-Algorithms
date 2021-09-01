#include<iostream>
#include<algorithm>

using namespace std;


bool find3Numbers(int *a, int n, int sum){
	
	int l, r;
	
	sort(a, a+n);
	for(int i=0;i<n-2;i++){
		
		l = i+1; 
		r = n-1;
		
		while(l<r){
			if(a[i]+a[l]+a[r]==sum) return 1;
			else if(a[l]+a[r]<sum) l++;
			else r--;
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
