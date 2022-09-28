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

// O(M), where M is the length of the linked list
// O(1)
void printNthFromLast(Node** head, int n){
	int len = 0;
	
	Node* temp = *head;
	
	while(temp != NULL){
		len++;
		temp = temp->next;
	}
	
	if(len < n)
		return;
	
	temp = *head;
	
	for(int i=0; i<len-n; i++)
		temp = temp->next;
		
	cout<<temp->data;
	cout<<"\n";
	
}

// O(M), where M is the size of the linked list
// O(M), for call stack
void printNthFromLastRecursive(Node* head, int n){
	static int i = 0;
	
	if(head == NULL)
		return;
	
	printNthFromLastRecursive(head->next, n);
	
	if(++i == n){
		cout<<head->data;
		cout<<"\n";
	}
		
}

void print(Node* head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	
	cout<<"\n";
}


int main(){
	
	Node* head = new Node(10);
	head->next = new Node(4);
	head->next->next = new Node(15);
	head->next->next->next = new Node(35);
	
	print(head);
	printNthFromLast(&head, 2);
	printNthFromLastRecursive(head, 4);
	
	return 0;
}
