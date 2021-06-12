#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next, *prev;
};

struct Node* head;
struct Node* GetnewNode(int x){
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=x;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}


void insertAtHead(int x){
	struct Node* temp=GetnewNode(x);
	if(head==NULL){
		head=temp;
	}
	head->prev=temp;
	temp->next=head;
	head=temp;
}
void Print(){
	struct Node* temp=head;
	if(temp==NULL) return;
	while(temp->next!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void reversePrint(){
	struct Node* temp=head;
	if(temp==NULL) return;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	while(temp->prev!=NULL){
		printf("%d\t",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}


int main(){
	insertAtHead(5);
	insertAtHead(4);
	insertAtHead(3);
	insertAtHead(2);
	insertAtHead(1);
	//Print();
	reversePrint();
	return 0;
}











