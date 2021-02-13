bool utils(Node *root,int curr_lvl,int *leaf_lvl){

	if (root==NULL) return true;

	if (root->right==NULL && root->left==NULL){
		if (*leaf_lvl==0) *leaf_lvl=curr_lvl;
		return (*leaf_lvl==curr_lvl);
	}
	return utils(root->right,curr_lvl+1,leaf_lvl)&&utils(root->left,curr_lvl+1,leaf_lvl);
}

bool check(Node *root){
	int curr_lvl=0,leaf_lvl=0;
	return utils(root,curr_lvl,&leaf_lvl);
}