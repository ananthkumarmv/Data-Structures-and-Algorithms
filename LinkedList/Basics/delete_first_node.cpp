#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data=x;
		next = NULL;
	}
};


Node* insertEnd(Node *head, int x){
	Node *temp = new Node(x);
	if(head==NULL) return temp;
	Node *curr = head;
	while(curr->next)
		curr = curr->next;
		
	curr->next = temp;
	return head;
}

Node* deleteAtBeg(Node *head){
	if(head==NULL) return NULL;
	else {
		Node *temp = head->next;
	
		delete head;
		return temp;
	}
}


void print(Node *head){
	
	if(head==NULL) return;
	
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	
}


int main(){
	
	Node *head = new Node(100);
	head = insertEnd(head, 10);
	head = insertEnd(head, 20);
	head = insertEnd(head, 30);
	head = insertEnd(head, 40);
	
	print(head);
	cout<<endl;
	head = deleteAtBeg(head);
	
	print(head);
	return 0;
}

