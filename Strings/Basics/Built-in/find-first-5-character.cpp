#include<iostream>

using namespace std;

int main(){
	string str = "geeksforgeeks a computer science";
	
	//only search first 5 character of "geeks.practice"
	size_t found = str.find("geeks.practice", 0, 5);
	if(found != string::npos)
		cout<<found<<endl;

    return 0;
}


