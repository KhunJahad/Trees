// post order means that the root node needs to be print after left subtree and right subtree
// left subtree right subtree and root

void postorder_recursive(Node *root){
	if (root==NULL) return;
	postorder_recursive(root->left);
	postorder_recursive(root->right);
	cout<<root->data<<" ";
}


void postorder_iterative(Node *root){
	stack <Node*> s;
	s.push(root);
	stack <int> ans;
	while(!s.empty()){
		Node *current=s.top();
		s.pop();

		ans.push(current->data);
		if (current->left) s.push(current->left);
		if (current->right) s.push(current->right);
	}

	while(!ans.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}