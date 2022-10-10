#include<iostream>

using namespace std;

class Node{
	public:
		Node* prev;
		int data;
		Node* next;
		
		Node(int x){
			data = x;
			next = prev = NULL;
		}		
};

void push(Node** head_ref, int x){
	
	Node* new_node = new Node(x);
	
	if((*head_ref) == NULL){
		*head_ref = new_node;
		return;
	}
	
	new_node->next = (*head_ref);
	
	(*head_ref)->prev = new_node;
	
	(*head_ref) = new_node;
	
}

void insertAfter(Node** head_ref, int x, int n){
	
	if((*head_ref) == NULL){
		return;
	}
	
	Node* temp = (*head_ref);
	
	while(temp != NULL && temp->data != n)
		temp = temp->next;
	
	Node* new_node = new Node(x);
	
	if(temp != NULL && temp->data == n){
		
		new_node->next = temp->next;
		
		new_node->prev = temp;
		
		temp->next = new_node;
		
		if(new_node->next != NULL)
			new_node->next->prev = new_node;
		
		
	}
	
}

void insertBefore(Node** head_ref, int x, int n){
	
	Node* temp = (*head_ref);
	
	if((*head_ref) == NULL)
		return;
		
	while(temp != NULL && temp->data != n)
		temp = temp->next;
		
	if(temp != NULL && temp->data == n){
		
		Node* new_node = new Node(x);
		
		new_node->next = temp;
		
		new_node->prev = temp->prev;
		
		temp->prev = new_node;
		
		
		if(new_node->prev != NULL){
			new_node->prev->next = new_node;
		}
		
		else
			(*head_ref) = new_node;
		
	}
	
}

void insertAtEnd(Node** head_ref, int x){
	
	Node* new_node = new Node(x);
	
	if((*head_ref) == NULL){
		(*head_ref) = new_node;
		return;
	}
	
	Node* temp = (*head_ref);
	while(temp->next != NULL)
		temp = temp->next;
		
	new_node->prev = temp;
	temp->next = new_node;
	
}


void print(Node* head){
	
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void printReverse(Node* head){
	
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
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	
	insertAfter(&head, 3, 2);
	
	print(head);
	
	insertAtEnd(&head, 6);
	
	print(head);
	
	insertBefore(&head, 0, 1);
	
	print(head);
	
	printReverse(head);
	
	return 0;
}
