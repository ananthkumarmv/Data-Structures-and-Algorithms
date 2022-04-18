#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int arr[] = { 1, 1, 1, 1, 0, 0, 0, 0, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
     
    auto ptr = upper_bound(arr, arr + size, 1, greater<int>());
    cout<< (ptr - arr);
 
    return 0;
}

