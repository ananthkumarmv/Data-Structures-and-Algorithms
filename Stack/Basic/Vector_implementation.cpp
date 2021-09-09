#include<iostream>
#include<vector>
using namespace std;

struct myStack{
	vector<int> v;
	void push(int x){
		v.push_back(x);
	}
	
	int pop(){
		int res= v.back();
		v.pop_back();
		return res;
	}
	
	int size(){
		return v.size();
	}
	
	bool isEmpty(){
		return v.empty();
	}
	
	int peek(){
		return v.back();
	}
};



int main(){
	
	myStack s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	
	cout<<s.peek()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isEmpty();
	return 0;
}

