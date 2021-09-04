#include<iostream>


using namespace std;

struct Node{
	int data;
	Node *prev, *next;
	
	Node(int x){
		data = x;
		prev=next=NULL;
	}
};


Node* insertBegin(Node *head, int x){
	Node *temp = new Node(x);
	temp->next= head;
	if(head!=NULL)
		head->prev=temp;
	
	return temp;
}

void print(Node *head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}



int main(){
	
	Node *head = NULL;
	
	head=insertBegin(head, 40);
	head=insertBegin(head, 30);
	head=insertBegin(head, 20);
	head=insertBegin(head, 10);
	
	
	print(head);
	
	
	return 0;
}

