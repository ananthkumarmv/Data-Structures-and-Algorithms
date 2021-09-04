#include<iostream>

//0(n)
// 0(n)

using namespace std;


struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data =x;
		next = NULL;
	}
};


Node* InsertBeg(Node *head, int x){
	Node *temp = new Node(x);
	if(head==NULL) return temp;
	
	temp->next = head;
	head = temp;
	
	return temp;
}


void print(Node *head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
}


int rSearch(Node *head, int key){
	if(head==NULL) return -1;
	
	else if(head->data==key) return 1;
	
	else {
		int res = rSearch(head->next, key);
		if(res==-1) return -1;
		
		return res+1;
		
	}
}



int main(){
	
	Node *head = NULL;
	head = InsertBeg(head, 30);
	head = InsertBeg(head, 40);
	head = InsertBeg(head, 20);
	head = InsertBeg(head, 50);
	
	print(head);
	cout<<endl;
	
	int key=20;
	int pos = rSearch(head, key);
	if(pos>=0) cout<<key<<" Found at position "<<pos;
	else cout<<"Not found";
	
	return 0;
}

