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

void printMiddle(Node** head){
	
	if(*head == NULL)
		return;
	
	Node* temp = *head;
	int c=0;
	while(temp){
		c++;
		temp = temp->next;
	}
	temp = *head;
	for(int i=0; i<c/2; i++)
		temp = temp->next;
	
	cout<<temp->data<<"\n";
}

void printMiddleUsingTwoptr(Node** head){
	
	Node* fast_ptr = *head;
	Node* slow_ptr = *head;
	
	if(*head != NULL){
		while(fast_ptr != NULL && fast_ptr->next != NULL){
			fast_ptr = fast_ptr->next->next;
			slow_ptr = slow_ptr->next;
		}
		
		cout<<slow_ptr->data<<"\n";
	}
	
}

void printMidMethod3(Node* head){
	
	int count = 0;
	Node* mid = head;
	
	while(head != NULL){
		
		if(count & 1)
			mid = mid->next;
		
		++count;
		head = head->next;
	}
	
	if(mid != NULL)
		cout<<mid->data;
	
	
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
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);
	head->next->next->next->next = new Node(50);
	
	print(head);
	
	printMiddle(&head);
	
	// using two pointers
	printMiddleUsingTwoptr(&head);
	
	printMidMethod3(head);

	return 0;
}
