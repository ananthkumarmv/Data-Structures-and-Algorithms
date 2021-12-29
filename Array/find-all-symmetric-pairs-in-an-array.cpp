#include <iostream>
#include <unordered_set>
using namespace std;
 

struct Pair {
    int x, y;
};
 

template<typename T, size_t n>
void findPairs(T const(& pair)[n])
{
    // creating an empty set of strings
    unordered_set<string> set;
 
    for (int i = 0; i < n; i++)
    {

        string p = "{" + to_string(pair[i].x) + ", " +
                        to_string(pair[i].y) + "}";
 
        set.insert(p);
 
        string reverse_pair = "{" + to_string(pair[i].y) + ", " +
                                    to_string(pair[i].x) + "}";
 
        // if the mirror pair is seen before, print the pairs
        if (set.find(reverse_pair) != set.end()) {
            cout << p << " | " << reverse_pair << endl;
        }
    }
}
 
int main()
{
    Pair pair[] = { {3, 4}, {1, 2}, {5, 2}, {7, 10}, {4, 3}, {2, 5} };
    findPairs(pair);
 
    return 0;
}
