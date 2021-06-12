#include <iostream>
using namespace std;
 
// Function to print all non-empty substrings of the specified string
void printAllSubstrings(string str)
{
    int n = str.length();
 
    // consider all substrings starting from `i`
    for (int i = 0; i < n; i++)
    {
        // consider all substrings ending at `j`
        for (int j = i; j < n; j++) {
            cout << "'" << str.substr(i, j - i + 1) << "', ";
        }
    }
}
 
int main()
{
    string str = "techie";
    printAllSubstrings(str);
 
    return 0;
}
