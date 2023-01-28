#include<iostream>
#include<queue>

using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int data){
			this->data = data;
			left = right = NULL;
		}
};


void levelOrder(Node* root){
	
	if(root == NULL)
		return;
		
	queue<Node*> q;
	
	q.push(root);
	
	while(q.empty() == false){
		
		Node* node = q.front();
		cout<<node->data<<' ';
		q.pop();
		
		if(node->left != NULL)
			q.push(node->left);
			
		if(node->right != NULL)
			q.push(node->right);
		
	}
	
}


int main(){
	
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	
	
	levelOrder(root);
	
	return 0;
}
