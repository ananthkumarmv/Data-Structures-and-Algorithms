#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *prev, *next;
	
	Node(int x){
		data =x;
		prev=next=NULL;
	}
};

Node *reverseDLL(Node *head){
	if(head==NULL || head->next==NULL) return head;
	
	Node *prev=NULL;
	curr=head;
	
	while(curr!=NULL){
		prev=curr->prev;
		curr->prev=curr->next;
		curr->next=prev;
		curr=curr->prev;
	}
	return prev->prev;
}



int main(){
	
	

	return 0;
}

