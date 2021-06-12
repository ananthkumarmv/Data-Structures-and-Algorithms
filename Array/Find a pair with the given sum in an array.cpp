#include <iostream>
#include <algorithm>
using namespace std;
 
void findPair(int arr[], int n, int sum)
{
    
    sort(arr, arr + n);
 
    
    int low = 0;
    int high = n - 1;
    int f=0;
    while (low < high)
    {
        
        if (arr[low] + arr[high] == sum)
        {
            cout << "Pair found (" << arr[low] << ", " << arr[high] << ")" << endl;
            f=1;
        }
 
        
        (arr[low] + arr[high] < sum)? low++: high--;
    }
    if(f==1) return;
 
    cout << "Pair not found";
}
 
int main()
{
    int arr[] = { 8, 7, 2, 5, 3, 1, -1};
    int sum = 10;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    findPair(arr, n, sum);
 
    return 0;
}

