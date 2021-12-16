#include <bits/stdc++.h>
using namespace std;
 

void printKMax(int arr[], int n, int k)
{
    int j, max;
 
    for (int i = 0; i <= n - k; i++)
    {
        max = arr[i];
 
        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        cout << max << " ";
    }
}


int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printKMax(arr, n, k);
    return 0;
}

