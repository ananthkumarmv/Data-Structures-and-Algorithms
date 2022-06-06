#include<iostream>
#include<cstring>
using namespace std;

void removeChar(char *s, char c){
	
	int j=0;
	for(int i=0; i<strlen(s); i++)
		if(s[i] != c)
			s[j++] = s[i];
	
	s[j] = '\0';
	
}


int main(){
	
	char str[] = "ananth";
	
	removeChar(str, 'a');
	
	cout<<str;

    return 0;
}


