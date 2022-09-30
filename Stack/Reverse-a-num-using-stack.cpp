#include<iostream>
#include<stack>

using namespace std;

int reverse_number(int n){
	
	stack<int> st;
	
	while(n != 0){
		st.push(n%10);
		n /= 10;
	}
	
	int revnum = 0;
	int i = 1;
	while(!st.empty()){
		revnum = revnum + st.top() * i ;
		st.pop();
		i *= 10;
	}
	
	return revnum;
	
}


int main(){
	
	int n;
	cin>>n;
	cout<<reverse_number(n);

	return 0;
}
