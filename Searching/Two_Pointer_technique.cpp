#include<iostream>
#include<algorithm>

using namespace std;

bool hasArrayTwoCandidates(int *a, int n, int sum){
	int l=0, r=n-1;
	
	sort(a,a+n);
	while(l<r){
		if(a[l]+a[r]==sum) return true;
		else if(a[l]+a[r]<sum)
			l++;
		else r++;
	}
	return 0;
}



int main()
{
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int n = 16;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    // Function calling
    if (hasArrayTwoCandidates(A, arr_size, n))
        cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
 
    return 0;
}
