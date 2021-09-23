#include<iostream>

using namespace std;


struct Node
{
	int data;
	Node* next;
};

Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
	new_node->next = NULL;
    return new_node;
}


Node *reverse(Node *head){
	Node *prev = NULL;
	Node *current = head;
	Node *next;
	
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	
	return prev;
}

Node *addOneUtil(Node *head){
	// res is head node of the resultant list
	Node *res = head;
	Node *temp, *prev = NULL;
	
	int carry = 1, sum;
	
	while(head!=NULL){
		sum = carry+head->data;
		
		carry = (sum>=10) ? 1:0;
		
		sum=sum%10;
		
		head->data = sum;
		
		temp = head;
		head = head->next;
	}
	
	if(carry>0) 
		temp->next = newNode(carry);
		
		return res;
}


Node* addOne(Node *head){
	
	// reverse ll
	head = reverse(head);
	
	//adding one from left to right of reversed ll
	head = addOneUtil(head);
	
	//reversing modified ll
	return reverse(head);
}



void printList(Node *node){
	
	while(node!=NULL){
		cout<<node->data;
		node=node->next;
	}
	cout<<endl;
}


int main(){
	
	Node *head = newNode(1);
	head->next = newNode(9);
	head->next->next= newNode(9);
	head->next->next->next = newNode(9);
	
	cout<<"Before: ";
	printList(head);
	
	head = addOne(head);
	
	cout<<"After: ";
	printList(head);
	
	return 0;
}

