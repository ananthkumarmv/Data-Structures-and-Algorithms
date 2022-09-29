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


void push(Node** head, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head;
	*head = temp;
	
}

int detectLoop(Node* head){
	Node* fast = head;
	Node* slow = head;
	
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow == fast)
			return 1;
	}
	return 0;
	
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}

int main(){
	
	Node* head = NULL;
	
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	
	// creating loop
	head->next->next->next = head;
	if(detectLoop(head))
		cout<<"\nLoop found";
	else
		cout<<"\nNo Loop";
	return 0;
}
