int sumtree(Node *node){
	if (node==NULL) return 0;
	int ls=0;
	int rs=0;

	if (node->left) ls=node->data+sumtree(node->left);
	if (node->right) rs=node->data + sumtree(node->right);

	node->data=ls+rs;
	return node->data;
}

void toSumTree(Node *node){
	return sumtree(node);
}