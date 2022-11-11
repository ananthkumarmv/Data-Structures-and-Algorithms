#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	
	string str;
	cin>>str;
	
	if(n>=26){
		
		char j = 'a';
		
		for(int i=0; i<n; i++){
			str[i] = tolower(str[i]);
		}
				
		for(int i=0; i<26; i++){
			if(str.find(j) != string::npos){
				j++;
			}
				
			else{
				cout<<"NO\n";
				return 0;
			}
				
		}
		
		cout<<"YES\n";
		
	}
	
	else{
		cout<<"NO\n";
	}
	
	return 0;
}
