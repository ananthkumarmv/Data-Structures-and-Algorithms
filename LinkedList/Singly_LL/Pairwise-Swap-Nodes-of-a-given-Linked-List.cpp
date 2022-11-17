#include<iostream>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int x){
			data = x;
			next = NULL;
		}
};

void push(Node** head_ref, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head_ref;
	
	*head_ref = temp;
	
}


void pairWiseSwap(Node** head_ref){
	
	Node* temp = *head_ref;
	
	while(temp != NULL && temp->next != NULL){
		
		swap(temp->data, temp->next->data);
		
		temp = temp->next->next;
		
	}
	
}


void print(Node* head){
	if(head == NULL)
		return;
		
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	Node* head = NULL;
	
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	push(&head, 1);
	
	print(head);
	
	pairWiseSwap(&head);
	
	print(head);

	return 0;
}
