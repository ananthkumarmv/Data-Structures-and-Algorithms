#include<iostream>
#include<stack>
using namespace std;

struct Node{
	int data;
	Node* next;
	
	Node(int x){
		data = x;
		next = NULL;
	}
};


void push(Node** head, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head;
	*head = temp;
	
}


int isPalindrome(Node** head){
	
	Node* temp = *head;
	stack<int> s;
	while(temp != NULL){
		s.push(temp->data);
		temp = temp->next;
	}
	
	temp = *head;
	while(temp != NULL){
		
		int i = s.top();
		
		s.pop();
		
		if(i != temp->data)
			return 0;
		
		temp = temp->next;
	}
	
	return 1;
}

void print(Node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

int main(){
	
	Node* head = NULL;
	
	push(&head, 10);
	push(&head, 20);
	push(&head, 30);
	push(&head, 20);
	push(&head, 10);
	
	print(head);

	
	if(isPalindrome(&head))
		cout<<"Yes!";
	else 
		cout<<"No";
	
	return 0;
}
