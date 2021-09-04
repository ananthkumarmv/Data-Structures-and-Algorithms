#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data =x;
		next = NULL;
	}
};

Node* insertEnd(Node *head, int x){
	Node *temp = new Node(x);
	
	if(head==NULL) return temp;
	
	Node *curr = head;
	
	while(curr->next){
		curr = curr->next;
	}
	
	curr->next = temp;
	
	return head;
	
}


Node* insertPos(Node *head, int data, int pos){
	Node *temp = new Node(data);
	
	if(pos==1){
		temp->next=head;
		return temp;
	}
	
	Node *curr = head;
	for(int i=1;i<pos-1&&curr!=NULL;i++)
		curr = curr->next;
		
	if(curr==NULL) return head;
	
	temp->next = curr->next;
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
	
	Node *head = NULL;
	
	head = insertEnd(head, 10);
	head = insertEnd(head, 20);
	head = insertEnd(head, 30);
	head = insertEnd(head, 40);
	
	
	print(head);
	cout<<endl;
	
	head = insertPos(head, 45, 4);
	
	print(head);
	
	return 0;
}

