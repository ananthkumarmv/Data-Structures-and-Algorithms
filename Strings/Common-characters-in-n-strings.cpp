#include<iostream>

using namespace std;

void commonChar(string str[], int n){
	
	bool prim[26];
	
	memset(prim, true, sizeof(prim));
	
	for(int i=0; i<n; i++){
		
		bool sec[26] = {false};
		
		for(int j=0; str[i][j]; j++){
			if(prim[str[i][j]-'a'])
				sec[str[i][j]-'a'] = true;
		}
		
		memcpy(prim, sec, 26);
		
	}
	
	for(int i=0; i<26; i++){
		
		if(prim[i])
			cout<<(char)('a'+i)<<" ";
	}
	
}

int main(){
	string str[] = { "geeksforgeeks",
                    "gemkstones",
                    "acknowledges",
                    "aguelikes" };
                    
    int n = sizeof(str)/sizeof(str[0]);
    
    commonChar(str, n);

	return 0;
}
