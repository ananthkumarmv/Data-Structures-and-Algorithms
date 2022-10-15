#include<iostream>

using namespace std;

int main(){
	string str1 = "geeks";
    string str2 = "forgeeks";
    
    int a1[26] = {0};
    int a2[26] = {0};
    
    for(int i=0; i<str1.length(); i++)
    	a1[str1[i] - 'a']++;
    	
    for(int i=0; i<str2.length(); i++)
    	a2[str2[i] - 'a']++;
    	
    for(int i=0; i<26; i++){
    	
    	if(a1[i] != 0 && a2[i] != 0){
    		
    		for(int j=0; j<min(a1[i], a2[i]); j++){
    			cout<<(char)('a'+i);
			}
    		
		}
    	
	}

	return 0;
}
