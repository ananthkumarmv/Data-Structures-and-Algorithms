#include<iostream>

using namespace std;

int search(int arr[], int x, int n){
	for(int i=0; i<n; i++)
		if(arr[i] == x)
			return i;
	
	return -1;
}


void printPostOrder(int in[], int pre[], int n){
	
	// the first ele in pre[] is always root, searching it
	// in in[] to find left and right subtrees 
	int root = search(in, pre[0], n);
	
	// if left subtree is not empty, printing left subtree
	if(root != 0)
		printPostOrder(in, pre+1, root);
		
	// if right subtree is not empty, printing right subtree
	if(root != n-1)
		printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
	
	// printing root
	cout<<pre[0]<<" ";
	
}


int main(){
	
	int in[] = { 4, 2, 5, 1, 3, 6 };
    int pre[] = { 1, 2, 4, 5, 3, 6 };
    
    int n = sizeof(in)/sizeof(in[0]);
    
    cout<<"Postorder Traversal"<<endl;
    
    printPostOrder(in, pre, n);


    return 0;
}


