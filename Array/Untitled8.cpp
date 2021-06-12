#include <iostream>
#include <cmath>
using namespace std;
 
void subsequence(int a[])
{
	int n=3;
 
    int N = pow(2, n);
 
    for (int i = 0; i < N; i++)
    {
        cout << "'";
 
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) {
                cout << a[j];
            }
        }
        cout << "', ";
    }
}
 
int main()
{
    int a[] = {1,2,3};
    subsequence(a);
 
    return 0;
}

