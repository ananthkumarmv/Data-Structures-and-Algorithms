#include<iostream>

using namespace std;


class Node{
	public:
		int data;
		Node *next;
};


void insertAtEnd(Node** root, int x){
	Node *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	
	if(*root == NULL){
		*root = temp;
	}
	
	else{
		Node* ptr;
		ptr = *root;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
}


Node* insert(int arr[], int n){
	Node* root = NULL;
	for(int i=0; i<n; i++)
		insertAtEnd(&root, arr[i]);
		
	return root;
}

Node* sortedInsert(Node* root, int ele){
	Node* temp = new Node;
	temp->data = ele;
	temp->next = NULL;
	
	if(root == NULL){
		return temp;
	}
	if(ele < root->data){
		temp->next= root;
		return temp;
	}
	
	Node* curr = root;
	while( curr->next !=NULL && curr->next->data < ele)
		curr = curr->next;
	
	temp->next = curr->next;
	curr->next = temp;
	
	return root;
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
	
	root = sortedInsert(root, 0);
	display(root);
	
    return 0;
}


