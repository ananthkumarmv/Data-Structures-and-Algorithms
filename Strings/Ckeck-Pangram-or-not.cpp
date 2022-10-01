#include<iostream>
#include<vector>
using namespace std;

bool checkPangram(string str){
	
	vector<bool> mark(26, false);
	
	int index;
	
	for(int i=0; i<str.length(); i++){
		
		if('A' <= str[i] && str[i] <= 'Z')
			index = str[i] - 'A';
			
		else if('a' <= str[i] && str[i] <= 'z')
			index = str[i] - 'a';
		
		else 
			continue;
		mark[index] = true;
	}
	
	for(int i=0; i<=25; i++)
		if(mark[i] == false)
			return false;
	
	return true;
	
}

int main(){
	
	string str = "The quick brown fox jumps over the"
                 " lazy dog";
    if (checkPangram(str) == true)
        printf(" %s \nis a pangram", str.c_str());
    else
        printf(" %s \nis not a pangram", str.c_str());

	return 0;
}
