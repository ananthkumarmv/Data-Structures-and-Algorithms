#include<bits/stdc++.h>

using namespace std;

string encodeString(string str){
	string result="";
	
	for(int i=0; i<str.length(); i++){
		
		if(isupper(str[i]))
			result = result + char(int(str[i] + 13 - 65)%26 + 65);
		
		else if(islower(str[i]))
			result = result + char(int(str[i] + 13 - 97)%26 + 97);
		
		else 
			result = result + str[i];
		
	}
	return result;
}


int main(){
	
	string str;
	getline(cin, str);
	cout<<encodeString(str);
	
    return 0;
}


