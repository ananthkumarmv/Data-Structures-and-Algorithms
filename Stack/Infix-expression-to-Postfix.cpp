#include<iostream>
#include<stack>

using namespace std;

int prec(char c){
	
	if(c == '^')
		return 3;
	else if(c == '*' || c == '/')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
		
		
	// value for '(' in stack
	return -1;
	
}

void infixToPostfix(string str){
	
	stack<char> st;
	int n = str.length();
	
	string res =  "";
	
	
	for(int i=0; i<n; i++){
		
		char c = str[i];
		
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')){
		   	res += c;
		   }
		
		else if(c == '(')
			st.push('(');
			
		else if(c == ')'){
			
			while(st.top() != '('){
				res += st.top();
				st.pop();
			}
			
			st.pop();
			
		}
		
		else{
			
			while((!st.empty()) && (prec(c) <= prec(st.top()))){
				res += st.top();
				st.pop(); 
			}
			
			st.push(c);
			
		}
		 
		
	}
	
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	
	cout<<res;
	
}

int main(){

	string exp = "a+b*(c^d-e)^(f+g*h)-i";
  
    infixToPostfix(exp);

	return 0;
}
