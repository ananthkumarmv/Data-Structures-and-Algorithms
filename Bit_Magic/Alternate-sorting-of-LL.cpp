#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};


Node* newNode(int key){
	Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}


void insertAtBeg(Node** head, int x){
	Node* temp = newNode(x);
	temp->next = *head;
	*head = temp;
}

Node* insert(int *arr, int n){
	Node* head = NULL;
	for(int i=0; i<n; i++)
		insertAtBeg(&head, arr[i]);
	return head;
}


void display(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
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
	
	head = altSortForLL(head);
	
	
    return 0;
}


