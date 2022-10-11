#include<iostream>
#include<stack>

using namespace std;

void deleteMid(stack<int>& st){
	
	int n = st.size();
	
	stack<int> temp;
	
	int count = 0;
	
	while(count<n/2){
		
		temp.push(st.top());
		st.pop();
		count++;
	}
	
	st.pop();
	
	while(!temp.empty()){
		st.push(temp.top());
		temp.pop();
	}
	
}

int main(){
	
	stack<int> st;
	
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	st.push(7);
	
	deleteMid(st);
	
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}

	return 0;
}
