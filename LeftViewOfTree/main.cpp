void leftview(Node *root){
	if (root==NULL) return;
	queue <Node*> q;
	q.push(root);
	while(!q.empty()){
		int n=q.size();
		for (int i=1;i<=n;i++){
			Node *temp=q.top();
			q.pop();
			if (i==1) cout<<temp->data<<" ";
			if (temp->left) q.push(temp->left);
			if (temp->right) q.push(temp->right); 
		}
	}
}