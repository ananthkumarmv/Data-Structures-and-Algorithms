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

void insertEnd()

Node* insertBeginning(int arr[], int n){
	Node* root = NULL;
	for(int i=n-1; i>=0; i--)
//		insertBeg(&root, arr[i]);
		insertEnd()
	return root;
}

void display(Node* root){
	while(root!=NULL){
		cout<<root->data<<" ";
		root = root->next;
	}
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* root = insert(arr, n);
	display(root);

    return 0;
}


