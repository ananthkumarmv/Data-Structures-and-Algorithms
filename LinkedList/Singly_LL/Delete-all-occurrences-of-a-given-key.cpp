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
	
	temp->next = *head_ref;
	
	*head_ref = temp;
	
}

void deleteKey1(Node** head, int key){
	
	if(*head == NULL)
		return;
	
	while(*head != NULL && (*head)->data == key){
		
		Node* temp = *head;
		*head = (*head)->next;
		
		delete temp;
	}
	
	Node* curr = *head;
	
	while(curr != NULL && curr->next != NULL){
		if(curr->next->data == key){
			Node* temp = curr->next;
			curr->next = curr->next->next;
			
			delete temp;
		}
		
		else
			curr = curr->next;
	}
	
}


void deleteKey2(Node** head, int key){
	
	if(*head == NULL)
		return;
	
	while(*head != NULL && (*head)->data == key){
		
		Node* temp = *head;
		*head = (*head)->next;
		
		delete temp;
	}
	
	if(*head == NULL)
		return;
	
	Node* curr = *head;
	Node* prev = nullptr;
	
	while(curr){
		if(curr->data == key){
			Node* temp = curr;
			prev->next = curr->next;
			curr = curr->next;
			delete temp;
		}
		else{
			prev = curr;
			curr = curr->next;
		}
			
	}
		
}


void print(Node* head){
	if(head == NULL)
		return;
		
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	Node* head = NULL;
	
	push(&head, 2);
	push(&head, 2);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	
	print(head);
	
	deleteKey2(&head, 2);
	
	print(head);

	return 0;
}
