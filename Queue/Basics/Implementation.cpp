#include<iostream>

using namespace std;

struct Queue{
	int *arr;
	int front, cap, size;
	Queue(int c){
		arr = new int[c];
		cap=c;
		front=0;
		size=0;
	}
	
	bool isFull(){
		return (size==cap);
	}
	
	bool isEmpty(){
		return (size==0);
	}
	
	
	void enque(int x){
		if(isFull()) return;
		arr[size]=x;
		size++;
	}
	
	void deque(){
		if(isEmpty()) return;
		for(int i=0; i<size-1; i++)
			arr[i]=arr[i+1];
			size--;
	}
	
	int getFront(){
		if(isEmpty())
			return -1;
		else
			return 0;
	}
	
	int getRear(){
		if(isEmpty())
			return -1;
		else
			return size-1;
	}
	
	
	int size(){
		return size;
	}
};



int main(){
	
	Queue q;
	


    return 0;
}


