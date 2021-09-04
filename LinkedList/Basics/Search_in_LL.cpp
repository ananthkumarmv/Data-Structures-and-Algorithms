#include<iostream>


using namespace std;


struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data = x;
		next=NULL;
	}
};


Node* InsertBeg(Node *head, int x){
	Node *temp = new Node(x);
	if(head==NULL) return temp;
	
	temp->next=head;
	head = temp;
	return head;
}


int searchkey(Node *head, int key){
	int i=1;
	Node *curr=head;
	while(curr){
		if(curr->data==key) return i; 
		curr = curr->next;
		i++;
	}
	return 0;
}


void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}


int main(){
	
	Node *head = NULL;
	head = InsertBeg(head, 30);
	head = InsertBeg(head, 20);
	head = InsertBeg(head, 10);
	
	
	print(head);
	cout<<endl;
	int s=30;
	int k=searchkey(head, s);
	if(k>0) cout<<s<<" Present at: "<<k<<endl;
	else cout<<"Not found"<<endl;
	
	return 0;
}

