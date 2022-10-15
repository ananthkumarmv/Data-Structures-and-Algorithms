#include<iostream>

using namespace std;

void findExtraChar(string strA, string strB){
	
	int res = 0;
	
	for(int i=0; i<strA.length(); i++){
		res ^= strA[i];
	}
	
	for(int i=0; i<strB.length(); i++){
		res ^= strB[i];
	}
	
	cout<<(char)res;
	
}

int main(){
	
	string strA = "abcd";
	string strB = "cbdad";
	
	findExtraChar(strA, strB);

	return 0;
}
