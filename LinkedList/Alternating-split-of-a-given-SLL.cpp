#include<iostream>
#include<assert.h>

using namespace std;

struct Node{
	int data;
	Node* next;
};

Node* getNode(int x){
	Node* temp = new Node;
	
	temp->data = x;
	temp->next = NULL;
	
	return temp;
}

void insertAtBeg(Node** headRef, int x){
	Node* temp = getNode(x);
	temp->next = *headRef;
	*headRef = temp;
}


Node* insert(int *arr, int n){
	Node* head = NULL;
	
	for(int i=0; i<n; i++){
		insertAtBeg(&head, arr[i]);
	}
	
	return head;
	
	
}

void moveNode(Node** destRef, Node** sourceRef){
	
	Node* newNode = *sourceRef;
	assert(newNode != NULL);
	
	*sourceRef = newNode->next;
	
	newNode->next = *destRef;
	
	*destRef = newNode;
	
}


void alternateSplit(Node* source, Node** aRef, Node** bRef){
	Node* a = NULL;
	Node* b = NULL;
	
	Node* curr = source;
	
	while(curr != NULL){
		moveNode(&a, &curr);
		if(curr != NULL){
			moveNode(&b, &curr);
		}
	}
	
	*aRef = a;
	*bRef = b;
	
}



void display(Node* node){
	while(node != NULL){
		cout<<node->data<<" ";
		node = node->next;
	}
	cout<<"\n";
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* head = insert(arr, n);
	display(head);
	
	Node* a = NULL;
	Node* b = NULL;
	
	alternateSplit(head, &a, &b);
	
	display(a);
	display(b);


    return 0;
}


