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
		(*head_ref) = temp;
		return;
	}
	
	temp->next = *head_ref;
	*head_ref = temp;
}


void removeDuplicates(Node** head_ref){
	
	Node *iptr, *jptr, *dup;
	iptr = *head_ref;
	
	while(iptr != NULL && iptr->next != NULL){
		
		jptr = iptr;
		
		while(jptr->next != NULL){
			if(iptr->data == jptr->next->data){
				
				dup = jptr->next;
				jptr->next = jptr->next->next;
				
				delete dup;	
			}
			
			else
				jptr = jptr->next;
		}
		iptr = iptr->next;
		
	}
	
		
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
	
	push(&head, 21);
	push(&head, 43);
	push(&head, 41);
	push(&head, 21);
	push(&head, 12);
	push(&head, 11);
	push(&head, 12);
	
	print(head);
	
	removeDuplicates(&head);
	
	print(head);

	return 0;
}
