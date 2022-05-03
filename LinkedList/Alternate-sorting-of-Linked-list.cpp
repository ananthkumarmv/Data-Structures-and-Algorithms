#include<iostream>

using namespace std;


struct Node{
	int data;
	Node* next;
};

Node* getNode(int data){
	
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertAtBeg(Node** head, int x){
	Node* temp = getNode(x);
	temp->next = *head;
	*head = temp;
}

Node* insert(int arr[], int n){
	
	Node* head = NULL;
	
	for(int i=0; i<n; i++)
		insertAtBeg(&head, arr[i]);
	
	return head;
	
}

void FrontBackSplit(Node* source,
                    Node** frontRef, Node** backRef)
{
    Node* fast;
    Node* slow;
    if (source == NULL || source->next == NULL) {
        // length < 2 cases
        *frontRef = source;
        *backRef = NULL;
    }
    else {
        slow = source;
        fast = source->next;
  
        // Advance 'fast' two nodes, and
        // advance 'slow' one node
        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
        }
  
        // 'slow' is before the midpoint in the list,
        // so split it in two at that point.
        *frontRef = source;
        *backRef = slow->next;
        slow->next = NULL;
    }
}
  
// function to merge two sorted lists in
// sorted order
Node* SortedMerge(Node* a, Node* b)
{
    Node* result = NULL;
  
    // Base cases
    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;
  
    // Pick either a or b, and recur
    if (a->data <= b->data) {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
  
    return result;
}
  
// sorts the linked list by changing
// next pointers (not data)
void MergeSort(Node** headRef)
{
    Node* head = *headRef;
    Node *a, *b;
  
    // Base case -- length 0 or 1
    if ((head == NULL) || (head->next == NULL))
        return;
  
    // Split head into 'a' and 'b' sublists
    FrontBackSplit(head, &a, &b);
  
    // Recursively sort the sublists
    MergeSort(&a);
    MergeSort(&b);
  
    // merge the two sorted lists together
    *headRef = SortedMerge(a, b);
}
  
// function to reverse the linked list
static void reverse(Node** head_ref)
{
    Node* prev = NULL;
    Node* current = *head_ref;
    Node* next;
  
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
  
    *head_ref = prev;
}
  
// function to alternately merge two lists
void alternateMerge(Node* head1, Node* head2)
{
    Node *p, *q;
    while (head1 != NULL && head2 != NULL) {
  
        // merging nodes alternately by
        // making the desired links
        p = head1->next;
        head1->next = head2;
        head1 = p;
        q = head2->next;
        head2->next = head1;
        head2 = q;
    }
}
  
// function for alternative sort of the
// linked list
Node* altSortForLinkedList(Node* head)
{
    // sort the linked list
    MergeSort(&head);
  
    Node *front, *back;
  
    // Split head into 'front' and 'back' sublists
    FrontBackSplit(head, &front, &back);
     // reversing the 'back' list
    reverse(&back);
  
    // merging the nodes of 'front' and 'back'
    // lists alternately
    alternateMerge(front, back);
  
    // required head of final list
    return front;
}



void display(Node* head){
	
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	
	cout<<"\n";
}


int main(){
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n; i++) cin>>arr[i];
	
	Node* head = insert(arr, n);
	display(head);
	
	head = altSortForLinkedList(head);
	
	display(head);
	
    return 0;
}


