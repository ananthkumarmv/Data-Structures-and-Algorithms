#include<iostream>

using namespace std;

int main(){
	
	string str;
	
	cin>>str;

	int n = str.length();
	
	cout<< n*(n+1)/2;

	return 0;
}
