#include<iostream>

using namespace std;

int main(){
	
	string str="ananth";
	
	cout<<str.length()<<" ";
	
	str+="kumar";
	cout<<str<<" ";
	
	cout<<str.substr(6,10)<<" ";
	
	cout<<str.find("an");
	return 0;
}

