#include <bits/stdc++.h>

using namespace std;
  
int replace(string A, string B)
{
  
    int n = A.length(), m = B.length();
    int count = 0, i, j;
  
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {

            if (A[i + j] != B[j]) 
                break;
        }
  
        if (j == m) {
            count++;

            i += m - 1; 
        }
    }
  
    return count;
}

int main()
{
    string str1 = "aaaaaaaa";
    string str2 = "aaa";
  
    cout << replace(str1 , str2);
  
  return 0;
}
