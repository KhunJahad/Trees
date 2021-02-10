// root is traversed in order from left to right
// meaning print left subtree then root and then it's right subtree for every node.

void inorder_recursive(Node *root){
	if (root==NULL) return;
	inorder_recursive(root->left);
	cout<<root->data<<" ";
	inorder_recursive(root->right);
}


void inorder_iterative(Node *root){
	stack <Node*> s;
	Node *current=root;
	while(currrent!=NULL || !s.empty()){

		if (current!=NULL){
			s.push(current);
			current=current->left;
		}
		else{
			current=s.top();
			cout<<current->data<<" ";
			s.pop();
			current=currrent->right;
		}
	}
}