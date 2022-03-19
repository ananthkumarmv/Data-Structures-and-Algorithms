#include<iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

void insert(Node** root, int item){
	Node* temp = new Node;
	temp->data = item;
	temp->next = *root;
	*root = temp;
}


Node* arrayToList(int arr[], int n){
	Node* root = NULL;
	for(int i=n-1; i>=0; i--)
		insert(&root, arr[i]);
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
	
	Node* root = arrayToList(arr, n);
	display(root);


    return 0;
}


