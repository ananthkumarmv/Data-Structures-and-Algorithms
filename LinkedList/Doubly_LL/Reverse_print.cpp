#include<iostream>


using namespace std;


struct Node{
	int data;
	Node *prev;
	Node *next;
	
	Node(int x){
		data=x;
		prev=NULL;
		next=NULL;
	}
};


void print(Node *head){
	Node*curr = head;
	while(curr->next){
		curr = curr->next;
	}
	
	while(curr!=head->prev){
		cout<<curr->data<<" ";
		curr = curr->prev;
	}
}


int main(){
	
	Node *head = new Node(10);
	Node *temp1 = new Node(20);
	Node *temp2 = new Node(30);
	
	head->next = temp1;
	temp1->prev = head;
	temp1->next = temp2;
	temp2->prev = temp1;
	
	print(head);
	return 0;
}

