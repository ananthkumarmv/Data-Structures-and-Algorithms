#include<iostream>
#include<stack>

using namespace std;

struct Queue{
	stack<int> s1, s2;
	
	void enQueue(int x){
		
		// Moving all eles from s1 to s2
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		
		// Push item into s1
		s1.push(x);
		
		// pushing everything back to s1
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
		
	}
	
	int deQueue(){
		if(s1.empty()){
			cout<<"Queue is Empty";
			exit(0);
		}
		
		int x = s1.top();
		s1.pop();
		
		return x;
	}
};


int main(){
	Queue q;
	
	q.enQueue(10);
	q.enQueue(20);
	q.enQueue(30);
	
	cout<<q.deQueue()<<"\n";
	cout<<q.deQueue()<<"\n";
	cout<<q.deQueue()<<"\n";
	


    return 0;
}


