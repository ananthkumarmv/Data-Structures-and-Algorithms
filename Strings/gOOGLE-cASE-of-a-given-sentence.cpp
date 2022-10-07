#include<iostream>

using namespace std;

void convert(string& str){
	
	int n = str.length();
	
	if(n>0){
		str[0] = tolower(str[0]);
	}
	
	for(int i=1; i<n; i++){
		
		if(str[i] == ' '){
			str[i+1] = tolower(str[i+1]);
			i++;
		}
		else{
			str[i] = toupper(str[i]);
			
		}
		
	}
	
}

int main(){
	
	
	string str = "google case";
    convert(str);
    cout<<str;
	return 0;
}
