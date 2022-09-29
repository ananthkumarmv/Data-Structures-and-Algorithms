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

void removeDuplicatesFromSorted(Node** head){
	
	Node* curr = *head;
	
	if(curr == NULL)
		return;
	
	Node* next_next = NULL;
	while(curr->next){
		if(curr->data == curr->next->data){
			next_next = curr->next->next;
			
		    delete curr->next;
		    
		    curr->next = next_next;
		}
		
		else{
			curr = curr->next;
		}
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
	
	push(&head, 30);
	push(&head, 20);
	push(&head, 20);
	push(&head, 10);
	push(&head, 10);
	
	print(head);

	removeDuplicatesFromSorted(&head);
	
	print(head);
	
	return 0;
}
