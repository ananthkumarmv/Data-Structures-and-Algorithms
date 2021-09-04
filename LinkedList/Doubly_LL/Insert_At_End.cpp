#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *prev, *next;
	
	Node(int x){
		data=x;
		prev=next=NULL;
	}
};

Node* insertEnd(Node *head, int x){
	Node *temp = new Node(x);
	if(head==NULL){
		return temp;
	}
	
	Node *curr=head;
	
	while(curr->next!=NULL){
		curr=curr->next;
	}
	temp->prev=curr;
	curr->next=temp;
	
	return head;
}


void print(Node *head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
}


int main(){
	Node *head=NULL;
	head = insertEnd(head, 10);
	head = insertEnd(head, 20);
	head = insertEnd(head, 30);
	head = insertEnd(head, 40);
	head = insertEnd(head, 50);
	
	print(head);
	
	return 0;
}

