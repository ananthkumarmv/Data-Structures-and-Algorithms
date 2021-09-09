#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

void insert(int x){
	struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}

void print(){
	struct node* p=head;
	while(p){
		printf("%d",p->data);
		p=p->next;
	}
}

void reverse(){
	struct Node *prev,*current, *next;
	current=head;
	prev=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
int main(){
	int n,i;
	struct Node* head;
	head=NULL;
	printf("How many: ");
	scanf("%d",&n);
	for( i=0;i<n;i++){
		int x;
		printf("Enter a number: ");
		scanf("%d",&x);
		insert(x);
	}
	print();
	reverse();
	print();
	return 0;
}


