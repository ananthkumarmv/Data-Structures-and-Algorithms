#include<iostream>
#include<stack>

using namespace std;



int isMatching(char a, char b){
	 if ((a == '{' && b == '}') || (a == '[' && b == ']') || (a == '(' && b == ')') || a == 'X')
        return 1;
    return 0;
}


// recursive function to check if given exp
// is balaned or not
int isBalanced(string s, stack<char> ele, int ind){
	
	if(ind == s.length())
		return ele.empty();
		
	// var to store ele at the top of the stack
	char topEle;
	
	// var to store result of recursive call
	int res;
	
	if(s[ind] == '{' || s[ind] == '(' || s[ind] == '['){
		ele.push(s[ind]);
		return isBalanced(s, ele, ind + 1);
	}
	
	else if(s[ind] == '}' || s[ind] == ')' || s[ind] == ']'){
		if(ele.empty())
			return 0;
			
		topEle = ele.top();
		ele.pop();
		
		// check bracket is matching or not
		if(!isMatching(topEle, s[ind]))
			return 0;
		return isBalanced(s, ele, ind + 1);
	}
	
	else if(s[ind] == 'X'){
		stack<char> tmp = ele;
		tmp.push(s[ind]);
		res = isBalanced(s, tmp, ind+1);
		if(res)
			return 1;
		if(ele.empty())
			return 0;
		ele.pop();
		
		return isBalanced(s, ele, ind+1);
	}
	
}


int main(){
	
	string s = "{(X}[]";
	
	stack <char> ele;
	if(isBalanced(s, ele, 0))
		cout<<"Balanced";
	else
		cout<<"Not Balanced";


    return 0;
}


