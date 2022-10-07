#include<iostream>

using namespace std;

int isSubstring(string str1, string str2){
	
	int M = str1.length();
	int N = str2.length();
	
	for(int i=0; i<=M-N; i++){
		
		int j;
		for(j=0; j<N; j++)
			if(str1[i+j] != str2[j])
				break;
		
		if(j == N)
			return i;
	}
	
	return -1;
	
}

int isSubstring2(string str1, string str2){
	
	if(str1.find(str2) != string::npos)
		return str1.find(str2);
	
	return -1;
}

int main(){
	
	string str1 = "ananth";
	string str2 = "th";
	
	int res = isSubstring(str1, str2);
	
	if (res == -1)
        cout << "Not present";
    else
        cout << "Present at index " << res;
        
    
    
    str1 = "geeksforgeeks";
    str2 = "for";
    res = isSubstring2(str1, str2);
	
	if (res == -1)
        cout << "\nNot present";
    else
        cout << "\nPresent at index " << res;
	return 0;
}
