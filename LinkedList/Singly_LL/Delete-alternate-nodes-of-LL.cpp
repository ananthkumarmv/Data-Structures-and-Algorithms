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

void deleteAlt(Node** head){
	
	if(*head == NULL && (*head)->next){
		return;
	}
	
	Node* prev = *head;
	Node* node = (*head)->next;
	
	while(prev != NULL && node != NULL){
		
		prev->next = node->next;
		delete node;
		
		prev = prev->next;
		if(prev != NULL)
			node = prev->next;
		
	}
	
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

	deleteAlt(&head);
	
	print(head);
	
	return 0;
}
