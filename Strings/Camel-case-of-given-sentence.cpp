#include<iostream>

using namespace std;

string convert(string str){
	
	int n = str.length();
	
	int currindx = 0;
	
	for(int i=0; i<n; i++){
		if(str[i] == ' ')
			str[i+1] = toupper(str[i+1]);
		else
			str[currindx++] = str[i];
	}
	
	return str.substr(0, currindx);
	
}

int main(){
	
	string str = "Camel case of given sentence";
    cout << convert(str);

	return 0;
}
