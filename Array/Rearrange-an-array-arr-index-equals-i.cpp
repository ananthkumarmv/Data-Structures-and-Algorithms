#include <iostream>
using namespace std;
 
void fixArray(int ar[], int n)
{
    int i, j, temp;
 
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (ar[j] == i) {
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
                break;
            }
        }
    }
 
    for (i = 0; i < n; i++)
    {
        if (ar[i] != i)
        {
            ar[i] = -1;
        }
    }
 
    for (i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
}
 

int main()
{
    int n, ar[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    n = sizeof(ar) / sizeof(ar[0]);
 
    fixArray(ar, n);
}
 
