#include<iostream>

using namespace std;

void printInitials(string str){
	
	if(str.length() == 0)
		return;
	
	cout<<(char)toupper(str[0]);
	
	for(int i=1; i<str.length(); i++){
		
		if(str[i] == ' ')
			cout<<" "<<(char)toupper(str[i+1]);
	}
	
}

int main(){
	
	string str = "Ananth kumar";
	
	printInitials(str);

	return 0;
}
