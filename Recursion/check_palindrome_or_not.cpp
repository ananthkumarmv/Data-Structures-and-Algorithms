#include<iostream>


using namespace std;

bool isPalindrome(string &str, int start, int end){
	if(start>=end) return true;
	
	return (str[start]==str[end])&&isPalindrome(str, start+1, end-1);
}

int main(){
	string str="abcba";
	int n=str.length();
	if(isPalindrome(str, 0, n-1)) cout<<"Yes";
	else cout<<"No";

	return 0;
}



