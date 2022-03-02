#include<iostream>

using namespace std;

void preorder(Node *root){
	if(root!=NULL){
		cout<<(root->key)<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}


int main(){



    return 0;
}


