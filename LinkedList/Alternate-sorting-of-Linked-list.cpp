#include<iostream>

using namespace std;


struct Node{
	int data;
	Node* next;
};

Node* getNode(int data){
	
	Node* newNode;
	
	newNode->data = data;
	newNode->next = NULL;
	
	return newNode;
}

Node 



int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* head = insert(arr, n);
	display(head);
	
	head = alterSortForLinkedList(head);
	
	display(head);
	


    return 0;
}


