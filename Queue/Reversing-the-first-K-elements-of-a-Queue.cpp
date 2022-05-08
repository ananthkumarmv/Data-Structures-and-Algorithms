#include<iostream>
#include<queue>
#include<stack>

using namespace std;


void reverseQueueFirstKElements(int k, queue<int>& Queue){
	stack<int> st;
	
	if(Queue.empty() == true || k > Queue.size())
		return;
	
	if(k <= 0)
		return;
	
	for(int i=0; i<k; i++){
		st.push(Queue.front());
		Queue.pop();
	}
	
	while(!st.empty()){
		Queue.push(st.top());
		st.pop();
	}
	
	for(int i=0; i<Queue.size()-k; i++){
		Queue.push(Queue.front());
		Queue.pop();
	}
}

void Print(queue<int>& Queue){
	while(!Queue.empty()){
		cout<<Queue.front()<<" ";
		Queue.pop();
	}
	
}

int main(){
	
	queue<int> Queue;
    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);
    Queue.push(60);
    Queue.push(70);
    Queue.push(80);
    Queue.push(90);
    Queue.push(100);
 
    int k = 5;
    reverseQueueFirstKElements(k, Queue);
    Print(Queue);

    return 0;
}


