int height(Node *node){
	if (node ==NULL) return 0;

	int lheight=0;
	int rheight=0;

	if (node->left!=NULL) lheight=height(node->left);
	if (node->right!=NULL) rheight=height(node->right);

	return 1+max(lheight,rheight);
}