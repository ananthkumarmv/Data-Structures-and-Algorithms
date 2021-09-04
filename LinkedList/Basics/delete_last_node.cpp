#include<iostream>


using namespace std;


struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data = x;
		next=NULL;
	}
};


Node *insertEnd(Node *head, int x){
	Node *temp = new Node(x);
	if(head==NULL) return temp;
	
	Node *curr = head;
	while(curr->next!=NULL){
		curr= curr->next;
	}
	
	curr->next = temp;
	
	return head;
	
}


void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}


Node* deleteAtEnd(Node *head){
	if(head==NULL) return NULL;
	
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	
	Node *curr = head;
	while(curr->next->next!=NULL)
		curr = curr->next;
	
	delete(curr->next);
	
	curr->next = NULL;
	
	return head;
	
}


int main(){
	
	Node *head = NULL;
	head = insertEnd(head, 10);
	head = insertEnd(head, 20);
	head = insertEnd(head, 30);
	
	print(head);
	cout<<endl;
	head = deleteAtEnd(head);
	
	print(head);
	return 0;
}

