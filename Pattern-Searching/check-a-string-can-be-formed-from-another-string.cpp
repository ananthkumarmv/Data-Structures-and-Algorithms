#include <bits/stdc++.h>
using namespace std;
  

bool check(string S1, string S2)
{

    int n1 = S1.size();
    int n2 = S2.size();
  
    unordered_map<int, int> mp;
  
    for (int i = 0; i < n1; i++) {
        mp[S1[i]]++;
    }
  
    for (int i = 0; i < n2; i++) {
  
        if (mp[S2[i]]) {
            mp[S2[i]]--;
        }
  
        else if (mp[S2[i] - 1] && mp[S2[i] - 2]) {
  
            mp[S2[i] - 1]--;
            mp[S2[i] - 2]--;
        }
        else {
            return false;
        }
    }
  
   return true;
}

int main()
{
    string S1 = "abbat";
    string S2 = "cat";
  
    if (check(S1, S2))
        cout << "YES";
    else
        cout << "NO";
}
