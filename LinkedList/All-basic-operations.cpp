#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};


void insertBeg(Node** root, int x){
	Node* temp = new Node;
	temp->data = x;
	temp->next = *root;
	*root = temp;
}

void insertEnd(Node** root, int x){
	Node* temp = new Node;
	Node* ptr;
	temp->data = x;
	temp->next = NULL;
	
	if(*root==NULL)
		*root = temp;
	
	else{
		ptr = *root;
		while(ptr->next!=NULL)
			ptr = ptr->next;
		ptr->next=temp;
	}
}

Node* insert(int arr[], int n){
	Node* root = NULL;
	for(int i=n-1; i>=0; i--)
		insertBeg(&root, arr[i]);
	return root;
}

void deleteNode(Node** root, int key){
	Node* temp = *root;
	Node* prev = NULL;
	
	if(temp != NULL && temp->data == key){
		*root = temp->next;
		delete temp;
		return;
	}
	
	else{
		while(temp != NULL && temp->data != key){
		prev = temp;
		temp = temp->next;
		}
	
		if(temp == NULL) 
			return;
		
		prev->next = temp->next;
		
		delete temp;
	}
	
}

void display(Node* root){
	while(root!=NULL){
		cout<<root->data<<" ";
		root = root->next;
	}
	cout<<"\n";
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* root = insert(arr, n);
	display(root);
	
	deleteNode(&root, 4);
	display(root);

    return 0;
}

