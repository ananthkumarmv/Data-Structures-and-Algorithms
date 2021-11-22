#include<iostream>

using namespace std;

int main(){
	
	string s;
	int k;
	cin>>s>>k;
	int n;
	string res="";
	for(int i=0; i<s.length(); i++){
		char  c= s[i];
		if(c>='a' && c<='z'){
			n= (int)c;
			n+=k;
			if(n>126) res+=(char)(64+n%126);
			
			else if (n<65) res+=(char)(127 - (65-n));
			
			else res+=(char)n;
		}
		
		else res+=c;
	}
	
	cout<<res;


    return 0;
}


