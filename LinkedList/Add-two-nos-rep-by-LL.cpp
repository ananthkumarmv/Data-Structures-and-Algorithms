#include<iostream>

using namespace std;


struct Node{
	int data;
	Node* next;
};

Node* newNode(int data){
	Node* new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    
    return new_node;
}

void insertAtBeg(Node** head, int x){
	Node* temp = new Node;
	temp->data = x;
	temp->next = *head;
	*head = temp;

}


Node* insert(int *arr, int n){
	Node* head = NULL;
	for(int i=0; i<n; i++)
		insertAtBeg(&head, arr[i]);
	return head;
}


Node* addTwoLists(Node* first, Node* second){
	Node* res = NULL;
	Node *temp, *prev = NULL;
	int carry=0, sum;
	
	while(first != NULL || second != NULL){
		
		sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
		
		carry = (sum >= 10) ? 1 : 0;
		
		sum = sum %10;
		
		temp = newNode(sum);
		
		if(res == NULL)
			res = temp;
		else
			prev->next = temp;
		
		prev = temp;
		
		if(first) 
			first = first->next;
		if(second) 
			second = second->next;
	}
	
	if(carry > 0){
		temp->next = newNode(carry);
	}
	
	return res;
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
	
	Node* first = insert(arr, n);
	display(first);
	
	cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* second = insert(arr, n);
	display(second);
	
	Node* res = addTwoLists(first, second);
	display(res);

    return 0;
}


