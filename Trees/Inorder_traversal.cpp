#include<iostream>

using namespace std;


void inorder(Node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<(root->key)<<" ";
		inorder(root->right);
	}
}


int main(){



    return 0;
}


