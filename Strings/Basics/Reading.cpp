#include<iostream>


using namespace std;

int main(){
	char ch;
	cin>>ch;
	
	// here input buffer doesn't read space/newlines
	while(ch!='.'){
		//prints the last character that we have read
		cout<<ch;
		//updates my char in the memory (reads the next character)
		cin>>ch;
	}

	return 0;
}

