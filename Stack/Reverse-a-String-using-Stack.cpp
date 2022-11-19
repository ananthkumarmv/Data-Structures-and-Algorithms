#include<iostream>
#define ll long long

using namespace std;

class Stack{
	
	public:
		int top;
		unsigned cap;
		char* array;
		
		Stack(int c){
			cap = c;
			array = new char[cap];
			top = -1;
		}
		
	bool isFull(){
		return top == cap-1;
	}	
	
	bool isEmpty(){
		return top == -1;
	}
	
	void push(char ch){
		
		if(isFull())
			return;
		
		top++;	
		array[top] = ch;
		
	}
	
	char pop(){
		
		if(isEmpty())
			return -1;
			
		return array[top--];
		
	}
	
};


void reverse(char *str){
	
	
	int n = strlen(str);
	
	Stack st(n);
	
	for(int i=0; i<n; i++){
		st.push(str[i]);
	}
	
	for(int i=0; i<n; i++){
		str[i] = st.pop();
	}
	
}

int main(){
	
	
	char str[] = "Reverse";
	
	cout<<str<<"\n";
	reverse(str);
	
	cout<<str<<"\n";

	return 0;
}
