#include<iostream>

using namespace std;

void removepunctuations(string str){
	
	string res="";
	for(int i=0; i<str.length(); i++){
		if('A' <= str[i] && str[i] <= 'Z')
			res.push_back(str[i]);
		
		else if('a' <= str[i] && str[i] <= 'z')
			res.push_back(str[i]);
		
		else if(str[i] == ' ')
			res.push_back(str[i]);
	}
	
	cout<<res;
}

int main(){
	
	string str = "%welcome' to @geeksforgeek<s";
	
	removepunctuations(str);

	return 0;
}
