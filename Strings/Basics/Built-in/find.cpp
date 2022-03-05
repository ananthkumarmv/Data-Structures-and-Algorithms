#include<iostream>
#include <string>

using namespace std;

int main(){
	string str1, str2;
	
	cin>>str1>>str2;
	
	// finding first occurance
	size_t found = str1.find(str1);
	if(found!=string::npos)
		cout << "First occurrence is " << found << endl;
		
	// finding next occurance
	char arr[] = "an";
	found = str1.find(arr, found+1);
	if(found != string::npos)
		cout << "Next occurrence is " << found << endl;
		
    return 0;
}


