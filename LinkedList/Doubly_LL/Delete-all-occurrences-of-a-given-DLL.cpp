#include<iostream>
#define ll long long

using namespace std;

class Node{
	
	public:
		int data;
		Node *next, *prev;
		
		
		Node(int x){
			data = x;
			next = prev = NULL;
		}
	
};


void push(Node** head_ref, int x){
	
	Node* temp = new Node(x);
	
	if(*head_ref == NULL){
		*head_ref = temp;
		return;
	}
	
	
	temp->next = *head_ref;
	(*head_ref)->prev = temp;
	
	*head_ref = temp;
	
}


void deleteOccur(Node** head_ref, int x){
	
	Node* temp = *head_ref;
	
	while(temp != NULL){
		
		Node* curr = temp;
		
		if(temp->data == x){
			
			
			
		}
		
	}
	
}


void print(Node* head){
	
	while(head != NULL){
		
		cout<<head->data<<" ";
		head = head->next;
		
	}
	
}

int main(){
	
	
	Node* head = NULL;
	
	push(&head, 5);
	push(&head, 3);
	push(&head, 5);
	push(&head, 2);
	push(&head, 5);
	push(&head, 1);
	
	print(head);

	return 0;
}
