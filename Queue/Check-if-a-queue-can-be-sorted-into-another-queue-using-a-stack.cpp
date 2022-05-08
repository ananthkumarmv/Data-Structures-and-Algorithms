#include<iostream>
#include<queue>
#include<stack>
using namespace std;


bool checkSorted(int n, queue<int>& q){
	stack<int> st;
	int expected = 1;
	int front;
	
	while(!q.empty()){
		front = q.front();
		q.pop();
		
		// if front element is the expected element
		if(front == expected)
			expected++;
			
		else{
			// if stack is empty, push the element
			if(st.empty()){
				st.push(front);
			}
			
			// if top element is less than element which
            // need to be pushed, then return false.
			else if(!st.empty() && st.top() < front){
				return false;
			}
			
			else
				st.push(front);
		}
		
		// while expected element sare coming from
		// stack, pop then out.
		while(!st.empty() && st.top() == expected){
			st.pop();
			expected++;
		}
		
	}
	
	// if the final expected ele value is equal
	// to initial queue size and the stack is empty.
	if(expected -1 == n && st.empty())
		return true;
	
	return false;
	
}



int main(){
	queue<int> q;
	q.push(5);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	
	int n = q.size();
	
	(checkSorted(n, q) ? (cout<<"Yes") : (cout<<"No"));


    return 0;
}


