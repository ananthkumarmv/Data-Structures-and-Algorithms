#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			next = NULL;
		}
};


void swapNodes(Node*& head){
	
	if(head == NULL || head->next == NULL)
		return;
		
	Node* prev = head;
	Node* curr = head->next;
	
	head = curr;
	
	while(true){
		
		Node* next = curr->next;
		curr->next = prev;
		
		if(next == NULL || next->next == NULL){
			prev->next = next;
			break;
		}
		
		prev->next = next->next;
		
		prev = next;
		curr = next->next;
		
	}
	
}

void push(Node** head_ref, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head_ref;
	
	*head_ref = temp;
	
}

void print(Node* head){
	
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	
	cout<<"\n";
	
}

int main(){

	Node* head = NULL;
	
	push(&head, 8);
	push(&head, 7);
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	
	swapNodes(head);
	
	print(head);
	

	return 0;
}
