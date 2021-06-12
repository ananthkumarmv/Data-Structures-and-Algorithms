#include <iostream>
#include <cmath>
using namespace std;
 
void findPowerSet(string str)
{
    int n = str.length();
 
    int N = pow(2, n);
 
    for (int i = 0; i < N; i++)
    {
        cout << "'";
 
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j)) {
                cout << str[j];
            }
        }
        cout << "', ";
    }
}
 
int main()
{
    string str = "012";
    findPowerSet(str);
 
    return 0;
}

