#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

// Insert
void insertPos(Node** root, int x, int pos){
	Node* ins = new Node;
	ins->data = x;
	if(pos == 1){
		ins->next = *root;
		*root = ins;
		return;
	}
	
	Node* temp = *root;
	for(int i=1; i<=pos-2 && temp!=NULL; i++)
		temp = temp->next;
	
	if(temp==NULL)
		return;
		
	ins->next = temp->next;
	temp->next  = ins;
	
}


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

// Delete
Node* deleteHeadNode(Node** root){
	Node* temp = *root;
	if(temp == NULL) 
		return NULL;
		
	Node *ptr = temp->next;
	delete temp;
	return ptr;
}

void deleteLastNode(Node **root){
	Node* temp = *root;
	if(temp == NULL) return;
	
	if(temp->next==NULL){
		delete temp;
		return;
	}
	else{
		while(temp->next->next != NULL)
			temp = temp->next;
		
		delete(temp->next);
		temp->next = NULL;
	}
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

// Search

int search(Node** root, int x){
	Node* temp = *root;
	int pos=1;
	
	while(temp!=NULL){
		if(temp->data == x)
			return pos;
		else{
			pos++;
			temp= temp->next;
		}
	}
	
	return -1;
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
	
	root = deleteHeadNode(&root);
	display(root);
	
	deleteLastNode(&root);
	display(root);
	
	insertPos(&root, 5, 1);
	display(root);
	
	int x = search(&root, 3);
	x ==-1 ? cout<<"Not found" : cout<<x;
	
	
    return 0;
}

