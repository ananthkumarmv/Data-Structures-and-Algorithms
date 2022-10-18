#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int x){
			data = x;
			next = NULL;
		}
};

void push(Node** head_ref, int x){
	
	Node* temp = new Node(x);
	
	if((*head_ref) == NULL){
		*head_ref = temp;
		return;
	}
	
	temp->next = (*head_ref);
	*head_ref = temp;
	
}

void setMiddleHead(Node** head_ref){
	
	if(*head_ref == NULL)
		return;
		
	Node* slow = *head_ref;
	Node* fast = *head_ref;
	
	Node* prev = NULL;
	
	while(fast != NULL && fast->next != NULL){
		prev = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	
	prev->next = slow->next;
	slow->next = *head_ref;
	*head_ref = slow;
	
}

void print(Node* head){
	if(head == NULL)
		return;
		
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

int main(){
	
	Node* head = NULL;
	
//	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	
	int k = 3;
	
	setMiddleHead(&head);
	
	print(head);
	
	return 0;
}
