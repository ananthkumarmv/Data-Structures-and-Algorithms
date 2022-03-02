#include<iostream>

using namespace std;


void postorder(Node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<(root->key)<<" ";
	}
}


int main(){



    return 0;
}


