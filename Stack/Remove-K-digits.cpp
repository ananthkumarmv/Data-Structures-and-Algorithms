#include<iostream>
#include<stack>

using namespace std;


int main(){

	string str;
	cin>>str;
	
	int k;
	cin>>k;
	
	int n = str.length();
	
	stack<char> mystack;
	
	for(char c : str){
		while(!mystack.empty() && k>0 && mystack.top()>c){
			mystack.pop();
			k--;
		}
		
		if(!mystack.empty() || c!='0')
			mystack.push(c);
			
	}
	
	while(!mystack.empty() && k--){
		mystack.pop();
	}
	
	if(mystack.empty())
		cout<<"0";
	else{
		while(!mystack.empty()){
			str[n-1] = mystack.top();
			mystack.pop();
			n--;
		}
		
		cout<<str.substr(n);
	}
	

	return 0;
}
