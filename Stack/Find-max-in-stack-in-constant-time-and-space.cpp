#include<iostream>
#include<stack>

using namespace std;

// O(1)
// O(1)
class MyStack{
	int maxEle;
	stack<int> st;
	
	public:
		void push(int x);
		void pop();
		void getMax();
		void peek();
};

void MyStack::peek(){
	if(st.empty()){
		cout<<"Stack is empty!"<<endl;
		return;
	}
	else{
		int t = st.top();
		cout<<"Top Most ele is: ";
		(t < maxEle) ? cout<<t : cout<<maxEle;
		cout<<endl;
	}
}

void MyStack::push(int x){
	
	if(st.empty()){
		maxEle = x;
		cout<<"Element inserted: "<<x<<endl;
		st.push(x);
		return;
	}
	
	if(x <= maxEle){
		st.push(x);
		cout<<"Element inserted: "<<x<<endl;
	}
	else{
		st.push(2*x - maxEle);
		cout<<"Element inserted: "<<x<<endl;
		maxEle = x;
	}
		
}

void MyStack::pop(){
	
	if(st.empty()){
		cout<<"Stack is empty: \n";
	}
	
	if(st.top() <= maxEle){
		cout<<"Removed: "<<maxEle<<endl;
		st.pop();
	}
	else{
		cout<<"Removed: "<<maxEle<<endl;
		maxEle = 2*maxEle - st.top();
		st.pop();
	}
	
}

void MyStack::getMax(){
	if(st.empty())
		cout<<"Stack is empty!"<<endl;
	else{
		int t = st.top();
		
		cout << "Maximum Element in the stack is: " << maxEle << "\n";
	}
}
		
		
		
		

int main(){
	
	MyStack s;
    s.push(3);
    s.push(5);
    s.getMax();
    s.push(7);
    s.push(19);
    s.getMax();
    s.pop();
    s.getMax();
    s.pop();
    s.peek();
	
	return 0;
}
