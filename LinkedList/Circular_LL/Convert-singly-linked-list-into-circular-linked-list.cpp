#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
	
	Node(int x){
		data = x;
		next = NULL;
	}
};

void circular(Node** head){
	
	Node* temp = *head;
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = *head;
	
}

void push(Node** head, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head;
	*head = temp;
	
}

void print(Node *head){
	
	Node* start = head;
	
	while(head->next != start){
		cout<<head->data<<" ";
		head = head->next;
	}
	
	cout<<head->data;
	
}

int main(){
	
	Node* head = NULL;
	
	push(&head, 15);
    push(&head, 14);
    push(&head, 13);
    push(&head, 22);
    push(&head, 17);
    
    
    circular(&head);
    
    print(head);
	
	
	return 0;
}
