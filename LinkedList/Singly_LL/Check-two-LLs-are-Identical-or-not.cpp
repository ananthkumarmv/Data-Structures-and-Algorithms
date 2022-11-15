#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data = x;
		next = NULL;
	}
};

bool areIdentical(Node* a, Node* b){
	
	while(a != NULL && b != NULL){
		if(a->data != b->data)
			return false;
			
		a = a->next;
		b = b->next;
	}
	
	return (a == NULL && b == NULL);
	
}

void print(Node *head){
	while(head!=NULL){
		cout<<(head->data)<<" ";
		head = head->next;
	}
	
	cout<<"\n";
}


int main(){
	
	Node* a = new Node(10);
	a->next = new Node(20);
	a->next->next = new Node(30);
	a->next->next->next = new Node(40);
	
	print(a);
	
	Node* b = new Node(10);
	b->next = new Node(20);
	b->next->next = new Node(30);
	b->next->next->next = new Node(40);
	
	print(b);
	
	if(areIdentical(a, b))
		cout<<"Identical\n";
	else
		cout<<"Not identical\n";

	return 0;
}
