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

Node* find_junction(Node* head){
	
	Node* slow = head;
	Node* fast = head;
	
	while(fast && fast->next){
		
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow == fast){

			slow = head;
			while(slow != fast){
				slow = slow->next;
				fast = fast->next;
			}
			
			return slow;
			
		}
	}
	
	return NULL;
	
}


void print_cycle(Node* jptr){
	
	Node* traverse = jptr;
	do{
		cout<<traverse->data<<" ";
		traverse = traverse->next;
	} while(traverse != jptr);
	cout<<"\n";
	
}


int main(){

	Node* head = NULL;
	
	head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(5);
	head->next->next->next->next->next = new Node(6);
	head->next->next->next->next->next->next = head->next->next;
	
	// finding junction Node where cycle starts
	Node *start = find_junction(head);
	if(!start)
		cout<<"No cycle exists\n";
	else{
		cout<<"Cycle starts at node: "<<start->data<<"\n";
		cout<<"Cycle elements are: ";
		print_cycle(start);
	}

	return 0;
}
