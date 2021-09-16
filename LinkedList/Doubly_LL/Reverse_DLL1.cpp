#include<iostream>

using namespace std;


struct Node{
	int data;
	Node *prev, *next;
	
	Node(int x){
		data=x;
		prev=next=NULL;
	}
};

Node *head=NULL;

void insertAtBeg(int *arr, int n){
	
	for(int i=0; i<n;i++){
		
		Node *temp = new Node(arr[i]);
		
		if(head==NULL) {
			head=temp;
		}
		
		head->prev=temp;
		head->next=head;
		head=temp;
	}
}


void print(){
	Node *curr = head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}


int main(){
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	insertAtBeg(a, n);

	return 0;
}

