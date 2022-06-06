#include<iostream>

using namespace std;


bool checkIfStrContainsDigitsOnly(string str){
	
	for(int i=0; i<str.length();i++){
		if(str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
	
}


int main(){
	
	string str;
	
	cin>>str;
	
	if(checkIfStrContainsDigitsOnly(str))
		cout<<"Contains only Digits";
	else 
		cout<<"Contains chars also";


    return 0;
}


