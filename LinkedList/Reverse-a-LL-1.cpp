#include<iostream>
#include<vector>

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


Node* reverseLL(Node* root){
	vector<int> arr;
	
	for(Node* curr=root; curr != NULL; curr = curr->next)
		arr.push_back(curr->data);
	
	for(Node* curr = root; curr != NULL; curr = curr->next){
		curr->data = arr.back();
		arr.pop_back();
	}
	
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
	
	root = reverseLL(root);
	display(root);
	
    return 0;
}

