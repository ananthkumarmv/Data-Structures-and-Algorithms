#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

Node* newNode(int data){
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = NULL;
	
	return new_node;
}


Node* reverse(Node* head){
	if(head == NULL) return NULL;
	
	Node* prev = NULL;
	Node* curr = head;
	Node* next;
	
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	
	return prev;
	
}


Node* addOneUtil(Node* head){
	Node* res = head;
	Node *temp, *prev = NULL;
	
	int carry = 1, sum;
	
	while(head != NULL){
		sum = carry + head->data;
		
		carry = (sum>=10) ? 1:0;
		
		sum = sum%10;
		
		head->data = sum;
		temp = head;
		head = head->next;
	}
	
	if(carry > 0) 
		temp->next = newNode(carry);
		
	return res;
	
}

Node* addOne(Node* head){
	
	// reversing LL
	head = reverse(head);
	
	// Adding 1 from lest to right of reversed list
	head = addOneUtil(head);
	
	head = reverse(head);
	
	return head;
}



void printList(Node* head){
	while(head != NULL){
		cout<<head->data;
		head = head->next;
	}
}


int main(){
	
	Node *head = newNode(1);
	head->next = newNode(9);
	head->next->next = newNode(9);;
	head->next->next->next = newNode(9);
	
	printList(head);
	
	head = addOne(head);
	
	printList(head);
	
	return 0;
}
