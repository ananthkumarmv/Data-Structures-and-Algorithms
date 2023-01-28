#include<iostream>
#include<unordered_set>

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

// O(n+m)
// O(1)
void getInterSectionNode3(Node* head1, Node* head2){
	
	Node* temp1 = head1;
	Node* temp2 = head2;
	
	
	while(temp1 != temp2){
		
		temp1 = temp1->next;
		temp2 = temp2->next;
		
		if(temp1 == temp2){
			break;
		}
		
		if(temp1 == NULL)
			temp1 = head2;
			
		if(temp2 == NULL)
			temp2 = head1;
		
	}
	
	(temp1 != NULL) ? cout<<temp1->data : cout<<"No intersection point found";
	
}


// O(n)
// O(n)
void getInterSectionNode2(Node* head1, Node* head2){
	
	unordered_set<Node*> st;
	
	while(head1 != NULL){
		st.insert(head1);
		head1 = head1->next;
	}
	
	while(head2 != NULL){
		if(st.find(head2) != st.end()){
			cout<<head2->data;
			return;
		}
		
		head2 = head2->next;
			
	}
	
	cout<<"No intersection point found";
	
}

// O(m*n)
// O(n)
void getInterSectionNode1(Node* head1, Node* head2){
	
	while(head2){
		
		Node* temp = head1;
		
		while(temp!= NULL){
			if(temp == head2){
				cout<<temp->data;
				return;
			}
			temp = temp->next;
		}
		
		head2 = head2->next;
		
	}
	
	cout<<"No intersection point found";
	
}

void push(Node** head_ref, int x){
	
	Node* temp = new Node(x);
	
	temp->next = *head_ref;
	
	*head_ref = temp;
	
}

void print(Node* head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

int main(){
	
	Node* head1 = NULL;
	
	push(&head1, 5);
	push(&head1, 4);
	push(&head1, 3);
	push(&head1, 2);
	push(&head1, 1);
	
	Node* head2 = NULL;
	
	push(&head2, 7);
	push(&head2, 6);
	
	head2->next->next = head1->next->next;
	
	print(head1);
	print(head2);
	
	getInterSectionNode3(head1, head2);

	return 0;
}
