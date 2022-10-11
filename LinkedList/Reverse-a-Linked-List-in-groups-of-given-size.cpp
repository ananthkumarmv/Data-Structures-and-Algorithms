#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int x){
			data = x;
			next=NULL;
		}
};

void push(Node** head_ref, int x){
	
	Node* new_node = new Node(x);
	
	if((*head_ref) == NULL){
		*head_ref = new_node;
		return;
	}
	
	new_node->next = *head_ref;
	
	*head_ref = new_node;
}

void reverseInSize(Node** head_ref, int k){
	
	if(*head_ref == NULL || (*head_ref)->next == NULL)
		return;
	
	Node *prev = NULL, *nxt = NULL;
	
	Node* curr = *head_ref;
	
	int count = 0;
	
	while(curr != NULL && count<k){
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
		count++;
	}
	
	if(prev->next != NULL)
		(*head_ref)->next = reverseInSize(&nxt, k);
		

}

void print(Node* head){
	
	if(head == NULL)
		return;
		
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
	
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
	
	reverseInSize(&head, 3);
	
	print(head);

	return 0;
}
