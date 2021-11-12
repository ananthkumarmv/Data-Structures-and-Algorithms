#include<iostream>

using namespace std;


int findSum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
 
            if (s[i] == s[j]) {
 
                
                sum += (j - i);
            }
        }
    }
 
    return sum;
}

int main(){
	
	string s = "ababa";
	cout<<findSum(s);
    return 0;
}


