void fillMap(Node *root,int lvl,map <int,vector<int>> &mp){

	if (root==NULL) return;

	mp[lvl].push_back(root->data);

	fillMap(root->left,lvl+1,mp);
	fillMap(root->right,lvl,mp);
	
}


void daigonaltraversal(Node *root){

	map <int,vector<int>> mp;
	fillMap(root,0,mp);

	for(auto itr=mp.begin();itr!=mp.end();itr++){
		for(auto c:itr->second) cout<<c<<" ";
		cout<<"\n";
	}
}