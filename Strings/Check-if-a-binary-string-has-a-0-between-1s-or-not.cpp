#include<iostream>

using namespace std;

bool checkString(string str){
	
	int n = str.length();
	int first, last;
	
	for(int i=0; i<n; i++){
		if(str[i] == '1'){
			first = i;
			break;
		}
	}
	
	for(int i=n-1; i>=0; i--){
		if(str[i] == '1'){
			last = i;
			break;
		}
	}
	
	for(int i=first; i<=last; i++)
		if(str[i] == '0')
			return false;
		
	return true;
	
}

int main(){
	
	string str;
	cin>>str;
	
	checkString(str) ? cout<<"Valid" : cout<<"Not Valid";

	return 0;
}
