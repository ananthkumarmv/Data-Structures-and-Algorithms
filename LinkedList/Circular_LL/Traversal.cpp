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

void insertAtBeg(Node **head, int x){
	Node* temp = *head;
	
	Node* ptr1 = new Node(x);
	ptr1->next = *head;
	
	if(*head != NULL){
		while(temp->next != *head)
			temp = temp->next;
		
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1;   /*For the first node */
	
	*head = ptr1;
}

void print(Node* head){
	
	Node* temp = head;
	
	if(head != NULL){
		do{
			cout<<temp->data<<" ";
			temp = temp->next;
		}while(temp != head);
	}

}

int main(){
	
	Node* head = NULL;
	insertAtBeg(&head, 3);
	insertAtBeg(&head, 2);
	insertAtBeg(&head, 1);
	
	print(head);
	
	return 0;
}
