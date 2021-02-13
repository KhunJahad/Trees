int height(Node *root){
	if (root==NULL) return 0;
	return (1+max(height(root->left),height(root->right)));
}

bool isbalanced(Node *root){
	if (root=NULL) return true;

	int lh=height(root->left);
	int rh=height(root->right);

	if (abs(lh-rs)<=1 && isbalanced(root->left) && isbalanced(root->right)) return true;
	return false;
}