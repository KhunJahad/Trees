// Pre order means the root needs to be printed before the left and right subtree
// Root left  subtree and right subtree.

void preorder_recursive(Node *root){
	if (root==NULL) return;
	cout<<root->data<<" ";
	preorder_recursive(root->left);
	preorder_recursive(root->right);
}

void preorder_iterative(Node *root){
	stack <Node*> s;
	s.push(root);
	while(!s.empty()){
		Node *temp=s.top();
		cout<<temp->data<<" ";
		s.pop();
		if (temp->right) s.push(temp->right);
		if (temp->left) s.pushh(temp=->left);
	}
}