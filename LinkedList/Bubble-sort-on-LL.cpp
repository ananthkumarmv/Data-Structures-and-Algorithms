#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

void swap(Node *a, Node *b){
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}

void bubbleSort(Node *head){
	int swapped, i;
	Node* ptr1;
	Node* lptr = NULL;
	
	if(head == NULL)
		return;
	
	do {
		swapped = 0;
		ptr1 = head;
		
		while(ptr1->next != lptr){
			if(ptr1->data > ptr1->next->data){
				swap(ptr1, ptr1->next);
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr =  ptr1;
	}
	while(swapped);
	
}


void insertAtEnd(Node** head, int x){
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	
	if(*head == NULL)
		*head = temp;
	
	else{
		Node *ptr;
		ptr = *head;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	
}


Node* insert(int *arr, int n){
	Node* head = NULL;
	for(int i=0; i<n; i++)
		insertAtEnd(&head, arr[i]);
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
	
	bubbleSort(head);
	display(head);

    return 0;
}


