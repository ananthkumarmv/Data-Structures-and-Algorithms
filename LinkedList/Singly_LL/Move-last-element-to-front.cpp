#include<iostream>
#include<stack>
using namespace std;

struct Node{
	int data;
	Node* next;
	
	Node(int x){
		data = x;
		next = NULL;
	}
};


void push(Node** head, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head;
	*head = temp;
	
}

void moveToFront(Node** head){
	
	if(*head == NULL || (*head)->next == NULL)
		return;
	
	Node* last = *head;
	Node* seclast = NULL;
	
	while(last->next != NULL){
		seclast = last;
		last = last->next;
	}
	
	seclast->next = NULL;
	
	last->next = *head;
	
	*head = last;
	
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

int main(){
	
	Node* head = NULL;
	
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);

	moveToFront(&head);
	
	print(head);
	
	return 0;
}
