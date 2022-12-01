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


void push(Node** head_ref, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head_ref;
	
	*head_ref = temp;
	
}


void reverseNodes(Node** head){
	
	Node* curr = *head;
	Node* prev = NULL;
	
	while(curr != NULL){
		
		Node* nxt = curr->next;
		
		curr->next = prev;
		prev = curr;
		curr = nxt;
		
	}
	
	*head = prev;
	
}


void reOrder(Node** head){
	
	if((*head) == NULL || (*head)->next == NULL)
		return;
		
	Node* slow = *head;
	Node* fast = (*head)->next;
	
	while(fast != NULL && fast->next != NULL){
		
		slow = slow->next;
		fast = fast->next->next;
		
	}
	
	Node* head1 = *head;
	Node* head2 = slow->next;
	
	slow->next = NULL;
	
	reverseNodes(&head2);
	
	(*head) = new Node(0);
	
	Node* curr = *head;
	
	while(head1 || head2){
		
		if(head1 != NULL){
			
			curr->next = head1;
			curr = curr->next;
			head1 = head1->next;
			
		}
		
		if(head2 != NULL){
			
			curr->next = head2;
			curr = curr->next;
			head2 = head2->next;
			
		}
		
	}
	
	*head = (*head)->next;
	
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
	
	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	reOrder(&head);
	print(head);

	return 0;
}
