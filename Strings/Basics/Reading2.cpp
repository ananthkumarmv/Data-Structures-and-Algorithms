#include<iostream>


using namespace std;

int main(){
	char ch;
	//cin>>ch;
	//reads the first char
	ch = cin.get();  //this method reads any single char including spaces/newlines
	while(ch!='.'){
		//prints the last character that we have read
		cout<<ch;
		//updates my char in the memory (reads the next character)
		//cin>>ch;
		//reads the rest of the characters
		ch = cin.get();
		
	}

	return 0;
}

