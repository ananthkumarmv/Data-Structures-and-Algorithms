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

int countNodes(Node* list){
	Node* temp = list;
	int count=1;
	

	while(temp->next != list){
		count++;
		temp = temp->next;
	}
	
	return count;
	
}

int countNodesInLoop(Node** head){
	Node* fast = *head;
	Node* slow = *head;
	
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow == fast)
			return countNodes(slow);
	}
	return 0;
	
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
	
	push(&head, 50);
	push(&head, 40);
	push(&head, 30);
	push(&head, 20);
	push(&head, 10);
	
	print(head);

	// creating loop
	head->next->next->next->next->next = head->next->next;
	
	cout<<countNodesInLoop(&head);
	
	return 0;
}
