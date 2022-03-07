#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node* next;
};


// A utility function too print LL
void printList(struct Node* node){
	while(node != NULL){
		cout<<node->data<<" ";
		node = node->next;
	}
	cout<<endl;
}

// function to create newNode
// in a LL
NOde* newNode(int key){
	Node* temp = new Node;
	temp->data = key;
	temp->next = NULL;
	return temp;
}






int main(){
	Node* head = newNode(8);
	head = insertBeg(head, 7);
    head = insertBeg(head, 6);
    head = insertBeg(head, 5);
    head = insertBeg(head, 3);
    head = insertBeg(head, 2);
    head = insertBeg(head, 1);
    
    cout<<"Linked List:"<<endl;
    printList(head);
    rearrangeOddEven(head);
    
    cout<<"Linked List After Rearranging: "<<endl;
    printList(head);
    
    
    return 0;
}


