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

void deleteAtBeg(Node** head_ref){
	
	if((*head_ref) == NULL)
		return;
	
	Node* temp = (*head_ref);
	
	(*head_ref)= (*head_ref)->next;
	
	if((*head_ref) != NULL)
		(*head_ref)->prev = NULL;
		
	delete temp;
	
}


void deleteAtEnd(Node** head_ref){
	
	if((*head_ref) == NULL)
		return;
	
	if((*head_ref)->next == NULL){
		
		Node* temp = (*head_ref);
		(*head_ref) = NULL;
		delete temp;
		return;
		
	}
	
	Node* temp = (*head_ref);
	
	while(temp->next)
		temp = temp->next;
	
	
	if(temp->prev == NULL){
		(*head_ref) = NULL;
	}
	
	temp->prev->next = NULL;
	
	delete temp;
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
	
	deleteAtBeg(&head);

	print(head);

	deleteAtEnd(&head);
	
	print(head);
	printReverse(head);
	
	return 0;
}
