#include<iostream>

// 0(1)


using namespace std;

struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data = x;
		next = NULL;
	}
};


Node *insertBegin(Node *head, int x){
	Node *temp = new Node(x);
	temp->next = head;
	return temp;
}

void print(Node *head){
	while(head!=NULL){
		cout<<(head->data)<<" ";
		head = head->next;
	}
}


int main(){
	Node *head = NULL;
	
	head = insertBegin(head, 10);
	head = insertBegin(head, 20);
	head = insertBegin(head, 30);
	
	print(head);
	return 0;
}

