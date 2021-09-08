#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	char str[10];
	

	strcpy(str, "amith\0mv");  // prints only ananth
	
	cout<<str;

	return 0;
}

