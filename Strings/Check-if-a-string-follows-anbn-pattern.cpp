#include<iostream>

using namespace std;

bool isAnBn(string str){
	
	int n = str.length();
	
	if (n & 1)
        return false;
	
	int i;
	for(i=0; i<n; i++)
		if(str[i] != 'a')
			break;
			
	if(i*2 != n)
		return false;
		
	int j;
	for(j=i; j<n; j++)
		if(str[j] != 'b')
			return false;
			
	return true;
	
}

int main(){
	
	string str = "aabb";
	
	isAnBn(str) ? cout<<"Yes!" : cout<<"No";

	return 0;
}
