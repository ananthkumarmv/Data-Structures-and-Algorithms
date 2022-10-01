#include<iostream>
#include<vector>
using namespace std;

string missingChars(string &str){
	
	bool present[26] = {false};
	
	for(int i=0; i<str.length(); i++){
		
		if('A' <= str[i] && str[i] <= 'Z')
			present[str[i]-'A'] = true;
			
		else if('a' <= str[i] && str[i] <= 'z')
			present[str[i]-'a'] = true;
		
	}
	
	string res = "";
	for(int i=0; i<=25; i++)
		if(present[i] == false)
			res.push_back((char)(i+'a'));
	
	return res;
}

int main(){
	
	string str = "The quick brown fox jumps over the dog";
    cout<<missingChars(str);

	return 0;
}
