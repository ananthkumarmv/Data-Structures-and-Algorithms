#include<iostream>
#include<stack>

using namespace std;


struct Node{
	int data;
	Node* next;
};


Node* newNode(int key){
	Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}


void insertAtBeg(Node** head, int x){
	Node* temp = newNode(x);
	temp->next = *head;
	*head = temp;
}

Node* insert(int *arr, int n){
	Node* head = NULL;
	for(int i=0; i<n; i++)
		insertAtBeg(&head, arr[i]);
	return head;
}


void display(Node* head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

void reArrangeOddEven(Node *head){
	stack<Node*> odd;
	stack<Node*> even;
	int i = 1;
	
	while(head != NULL){
		if(head->data % 2 != 0 && i%2 == 0){
			
			// odd value in even position
			// adding ptr to current node 
			// in odd stack
			odd.push(head);
		}
		
		else if(head->data % 2 ==0 && i%2 != 0){
			// even value in odd position
			// adding ptr to current node 
			// in even stack
			even.push(head);
		}
		
		head = head->next;
		i++;
	}
	
	while(!odd.empty() && !even.empty()){
		// swapping data at the top of two stacks
		swap(odd.top()->data, even.top()->data);
		odd.pop();
		even.pop();
	}
	
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* head = insert(arr, n);
	display(head);
	
	reArrangeOddEven(head);
	display(head);

    return 0;
}


