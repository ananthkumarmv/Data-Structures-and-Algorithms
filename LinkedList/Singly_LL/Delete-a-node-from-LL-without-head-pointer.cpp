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

void deleteNodeWithoutHead(Node* pos){
	
	if(pos == NULL)
		return;
	
	if(pos->next == NULL){
		cout<<"\n This is last node, required head, can't be freed\n";
		return;
	}
	
	Node* temp = pos->next;
	
	pos->data = temp->data;
	pos->next = temp->next;
	
	delete temp;
	
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
	
	Node* del = head->next;
	deleteNodeWithoutHead(del);
	
	print(head);

	return 0;
}
