#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void interLeaveQueue(queue<int>& q){
	
	stack<int> s;	
	int halfQueue = q.size() / 2;
	
	for(int i=0; i<halfQueue; i++){
		s.push(q.front());
		q.pop();
	}
	
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	
	for(int i=0; i<halfQueue; i++){
		q.push(q.front());
		q.pop();
	}
	
	for(int i=0; i<halfQueue; i++){
		s.push(q.front());
		q.pop();
	}
	
	while(!s.empty()){
		q.push(s.top());
		s.pop();
		q.push(q.front());
		q.pop();
	}
	
}


int main(){
	
	queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    interLeaveQueue(q);
    
    int length = q.size();
    
    for (int i = 0; i < length; i++) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


