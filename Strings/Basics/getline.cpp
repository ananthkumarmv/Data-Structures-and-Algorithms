#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str;
	getline(cin, str);
	cout<<str.length();
	int i=0,special=0;
	while(str[i] != '\0') 
    { 
    	if((isalpha(str[i])==0) && (isdigit(str[i])==0) && (isspace(str[i])==0)) special++;    	 
    	i++; 
	} 
	cout<<special;
    return 0;
}


