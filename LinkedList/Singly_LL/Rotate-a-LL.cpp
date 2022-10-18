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

void rotate(Node** head_ref, int k){
	
	if((*head_ref) == NULL || k == 0)
		return;
	
	Node* curr = *head_ref;
	int count = 1;
	
	while(count<k && curr != NULL){
		count++;
		curr = curr->next;
	}
	
	if(curr == NULL)
		return;
	
	Node* KthNode = curr;
	
	while(curr->next != NULL)
		curr = curr->next;
		
	curr->next = (*head_ref);
	
	*head_ref = KthNode->next;
	
	KthNode->next = NULL;
	
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
	
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	
	int k = 3;
	
	rotate(&head, k);
	
	print(head);
	
	return 0;
}
