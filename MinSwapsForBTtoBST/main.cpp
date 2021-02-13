// inorder is always in BST 
// the concept is to make a inorder version of the tree
// and find its minimum sorting time that will be the answer
// the overall time complexity will be O(nlogn)

void inorder(Node *root,vector <int> &temp){
	if (root==NULL) return;
	inorder(root->left,temp);
	temp.push_back(root->data);
	inorder(root->right,temp);
}

int minSwaps(vector <int> v){
	vector <pair<int,int>> temp(v.size());
	for(int i=0;i<v.size();i++){
		temp[i].first=v[i];
		temp[i].second=i;
	}
	sort(temp.begin(),temp.end());
	int ans=0;
	for (int i=0;i<temp.size();i++){

		if (temp[i].second==i){
			continue;
		}
		else{
			swap(temp[i].first,temp[temp[i].second].first);
			swap(temp[i].second,temp[temp[i].second].second);
		}

		if (temp[i].second!=i) i--;
		ans++;
	}
	return ans;
}

void solve(Node *root){
	vector <int> temp;
	inorder(root,temp);
	cout<<minSwaps(temp)<<"\n";
}