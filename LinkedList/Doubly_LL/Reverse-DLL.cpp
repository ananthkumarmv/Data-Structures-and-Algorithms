#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node *prev, *next;
		
		Node(int x){
			data = x;
			next = prev = NULL;
		}
	
};

void push(Node** head_ref, int x){
	
	
	Node* new_node = new Node(x);
	
	if((*head_ref == NULL)){
		(*head_ref) = new_node;
		return;
	}
	
	new_node->next = (*head_ref);
	
	(*head_ref)->prev = new_node;
	
	(*head_ref) = new_node;
	
}

void reverseDLL(Node** head_ref){
	
	if((*head_ref) == NULL || (*head_ref)->next == NULL)
		return;
	
	Node* temp = NULL;
	Node* curr = *head_ref;
	
	while(curr!=NULL){
		temp = curr->prev;
		curr->prev = curr->next;
		curr->next = temp;
		curr = curr->prev;
	}
	
	(*head_ref) = temp->prev;
	
	
}

void print(Node* head){
	
	if(head == NULL)
		return;
	
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void printReverse(Node* head){
	
	if(head == NULL)
		return;
	
	while(head->next)
		head = head->next;
		
	while(head){
		cout<<head->data<<" ";
		head = head->prev;
	}
}


int main(){
	
	Node* head = NULL;
	
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	
	reverseDLL(&head);
	
	print(head);
	
	printReverse(head);

	return 0;
}
