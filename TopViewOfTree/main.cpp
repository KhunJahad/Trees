// the concept is to keep track of horizontal and vertifcal level


void fillMap(Node *root,int ext,int lvl,map <int,pair<int,int>> &mp){

	if (root==NULL) return;

	// if we encounter new horizontal level
	if (mp.count(ext)==0) mp[ext]={root->data,l};
	// if a level is already seen but it's higher level then the current so replace it
	else if (mp[ext].second>l) mp[ext]={root->data,l};

	fillMap(root->right,ext+1,lvl+1,mp);
	fillMap(root->left,ext-1,lvl+1,mp);
}


void topview(Node *root){
	map <int,pair<int,int>> mp;
	fillMap(root,0,0,mp);

	for(auto itr=mp.begin();itr!=mp.end();itr++){
		cout<<itr->second.first<<" ";
	}
	cout<<"\n";
}