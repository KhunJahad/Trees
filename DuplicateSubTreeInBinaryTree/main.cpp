string preorder(Node *root,map <string,int> &mp){
	string s="";
	if (root==NULL) return s;

	s+=root->data;
	s+=preorder(root->left,mp);
	s+=preorder(root->right,mp);
	mp[s]++;
	return s;
}

bool dupsub(Node *root){
	map <string,int> mp;
	preorder(root,mp);

	for(auto itr:mp){
		if (itr.second>1 && itr.first.size()>=2) return true;
	}
	return false;
}