#include<iostream>

using namespace std;


struct twoStacks{
	int *arr, cap, top1, top2;
	
	twoStacks(int n){
		cap = n;
		top1=-1;
		top2=cap;
		arr = new int[n];
	}
	
	void push1(int x){
		if(top1<top2-1){
			top1++;
			arr[top1] = x;
		}
	}
	
	void push2(int x){
		if(top1<top2-1){
			top2--;
			arr[top2]=x;
		}
	}
	
	int pop1(){
		if(top1>=0) {
			int x = arr[top1];
			top1--;
			return x;
		}
		else
			exit(1);
	}
	
	int pop2(){
		if(top2<cap){
			int x = arr[top2];
			top2++;
			return x;
		}
		else
			exit(1);
	}
	
};



int main(){
	
	twoStacks s(6);
	s.push1(10);
	s.push2(60);
	s.push1(20);
	s.push2(50);
	s.push1(30);
	s.push2(40);
	
	cout<<s.pop1()<<" ";
	cout<<s.pop2()<<" ";
	cout<<s.pop1()<<" ";
	cout<<s.pop2()<<" ";
	cout<<s.pop1()<<" ";
	cout<<s.pop2()<<" ";
	cout<<s.pop1()<<" ";

    return 0;
}


