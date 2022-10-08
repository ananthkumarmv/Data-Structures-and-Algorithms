#include<iostream>

using namespace std;

int findFlips(char str[], int n){
	char last = ' ';
	int res=0;
	
	for(int i=0; i<n; i++){
		
		if(last != str[i])
			res++;
			
		last = str[i];
	}
	
	return res/2;
}

int main(){
	
	char str[] = "0001111";
	int n = strlen(str);
	
	cout<<findFlips(str, n);

	return 0;
}
