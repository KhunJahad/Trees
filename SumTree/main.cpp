int sumtree(Node *root){
	if (root==NULL) return 0;
	return root->data + sumtree(root->right) + sumtree(root->left);
}

bool issumtree(Node *root){
	if (root==NULL || (root->left==NULL&&root->right==NULL)) return true;
	int ls=sumtree(root->left);
	int rs=sumtree(root->right);
	return (ls+rs==root->data)&&issumtree(root->left)&&issumtree(root->right);
}