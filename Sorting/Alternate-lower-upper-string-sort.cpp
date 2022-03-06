//Input : bAwutndekWEdkd
//Output :AbEdWddekkntuw
//Explanation:
//Here we can see that letter ‘A’, ’E’, ’W’ are sorted
//as well as letters “b, d, d, d, e, k, k, n, t, u, w” are sorted
//but both appears alternately in the string as far as possible.
//Input :abbfDDhGFBvdFDGBNDasZVDFjkb
//Output :BaBaDbDbDbDdDfFhFjFkGsGvNVZ

#include <bits/stdc++.h>
#define MAX 26

using namespace std;

void alternateSort(string &s)
{
    int n = s.length();

    int lCount[MAX] = { 0 }, uCount[MAX] = { 0 };
    for (int i = 0; i < n; i++) {
        if (isupper(s[i]))
            uCount[s[i] - 'A']++;
        else
            lCount[s[i] - 'a']++;
    }
  
    // Traversing through count arrays and one by one
    // picking characters.  Below loop takes O(n) time
    // considering the MAX is constant.
    int i = 0, j = 0, k = 0;
    while (k < n) {
        while (i < MAX && uCount[i] == 0)
            i++;
        if (i < MAX) {
            s[k++] = 'A' + i;
            uCount[i]--;
        }
  
        while (j < MAX && lCount[j] == 0)
            j++;
        if (j < MAX) {
            s[k++] = 'a' + j;
            lCount[j]--;
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    alternateSort(str);
    cout << str << "\n";
}


