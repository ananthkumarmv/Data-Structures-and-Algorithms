#include<iostream>

using namespace std;


int height(Node *root){
	if(root==NULL) 
		return 0;
	else 
		return max(height(root->left), height(root->right))+1;
}


int main(){



    return 0;
}


