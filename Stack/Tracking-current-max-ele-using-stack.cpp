#include<iostream>
#include<stack>

using namespace std;

class StackWithMax{
	stack<int> mainStack;
	
	// stack to keep track of max ele
	stack<int> trackStack;
	
	public:
		void push(int x){
			mainStack.push(x);
			if(mainStack.size() == 1){
				trackStack.push(x);
				return;
			}
			
			if(x > trackStack.top())
				trackStack.push(x);
			else
				trackStack.push(trackStack.top());
			
		}
		
		int getMAx(){
			return trackStack.top();
		}
		
		void pop(){
			mainStack.pop();
			trackStack.pop();
		}
		
};

int main(){
	
	StackWithMax s;
	s.push(4);
	cout<<s.getMAx()<<"\n";
	s.push(2);
	cout<<s.getMAx()<<"\n";
	s.push(14);
	cout<<s.getMAx()<<"\n";
	s.push(1);
	cout<<s.getMAx()<<"\n";
	s.push(18);
	cout<<s.getMAx()<<"\n";
	s.pop();
	s.push(50);
	cout<<s.getMAx()<<"\n";
	
	return 0;
}
