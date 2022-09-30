#include<iostream>
#include<stack>

using namespace std;

// O(1)
// O(1)
class MyStack{
	int minEle;
	stack<int> st;
	
	public:
		void push(int x);
		void pop();
		void getMin();
		void peek();
};

void MyStack::peek(){
	if(st.empty()){
		cout<<"Stack is empty!"<<endl;
		return;
	}
	else{
		int t = st.top();
		
	}
}

void MyStack::push(int x){
	
	if(st.empty()){
		minEle = x;
		cout<<"Element inserted: "<<x<<endl;
		st.push(x);
		return;
	}
	
	if(x >= minEle){
		st.push(x);
		cout<<"Element inserted: "<<x<<endl;
	}
	else{
		st.push(2*x - minEle);
		cout<<"Element inserted: "<<x<<endl;
		minEle = x;
	}
		
}

void MyStack::pop(){
	
	if(st.empty()){
		cout<<"Stack is empty: \n";
	}
	
	int t = st.top();
	st.pop();
	
	if(t >= minEle){
		cout<<"Removed: "<<t<<endl;
	}
	else{
		cout<<"Removed: "<<minEle<<endl;
		minEle = 2*minEle - t;
	}
	
}

void MyStack::getMin(){
	if(st.empty())
		cout<<"Stack is empty!"<<endl;
	else{
		int t = st.top();
		
		cout << "Minimum Element in the stack is: " << minEle << "\n";
	}
}
		
	
int main(){
	
	MyStack s;
    s.push(2);
	s.push(3);
	s.pop();
	s.getMin();
	s.push(1);
	s.getMin();
	s.peek();
	
	return 0;
}
