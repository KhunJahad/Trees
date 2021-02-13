void fillMap(Node *root,int ext,int lvl,map <int,pair<int,int>> &mp){

	if (root==NULL) return;

	if (mp.count(ext)==0) mp[ext]={root->data,lvl};
	else if (mp[ext].second<lvl) mp[ext]={root->data,lvl};

	fillMap(root->right,ext+1,lvl+1,mp);
	fillMap(root->left,ext-1,lvl+1,mp);
}


void bottomView(Node *root){
	map <int,pair<int,int>> mp;
	fillMap(root,0,0,mp);
	for(auto itr=mp.begin();itr!=mp.end();itr++) cout<<itr->second.first<<" ";
	cout<<"\n";
}