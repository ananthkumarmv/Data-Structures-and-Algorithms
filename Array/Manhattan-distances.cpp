#include<iostream>
#include<cmath>
using namespace std;
int distancesum(int x[], int y[], int n)
{
    int sum = 0;
 
    
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            sum += (abs(x[i] - x[j]) +
                    abs(y[i] - y[j]));
    return sum;
}
 

int main()
{
    int x[] = { -1, 1, 3, 2 };
    int y[] = { 5, 6, 5, 3 };
    int n = sizeof(x) / sizeof(x[0]);
    cout << distancesum(x, y, n) << endl;
    return 0;
}
