#include <bits/stdc++.h>
using namespace std;


int sumOfSubString(string num)
{
    int n = num.length();
    int prev = num[0]-'0';
    int res = prev;
    int current = 0;

    for (int i = 1; i < n; i++) {
        int numi = num[i]-'0';
        current = (i + 1) * numi + 10 * prev;
        res += current;
        prev = current; 
    }
    return res;
}


int reverseOfDigits(int num){
	
	int rev_num=0;
	int reminder;
	while(num != 0)
	{
	    reminder = num % 10;
	    rev_num = rev_num * 10 + reminder;
	    num = num / 10;
	}
	return rev_num;
}


int main()
{
    string num;
    int num1;
    cin>>num;
    cout<<(num1=sumOfSubString(num))<<endl;
    cout <<reverseOfDigits(num1);
    return 0;
}

