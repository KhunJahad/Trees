vector <int> zigzag(Node *root){

	vector <int> ans;
	if (root==NULL)  return ans;

	queue <Node*> q;
	stack <int> s;
	q.push(root);
	int counter=0;
	while(!q.empty()){
		int n=q.size();
		if (counter%2==0){

			for(int i=1;i<=n;i++){
				Node *temp=q.front();
				q.pop();

				ans.push_back(temp->data);
				if (temp->left) q.push(temp->left);
				if (temp->right) q.push(temp->right);
			}

		}

		else{

			for(int i=1;i<=n;i++){
				Node *temp=q.front();
				q.pop();

				s.push(temp->data);
				if (temp->left) q.push(temp->left);
				if (temp->right) q.push(temp->right);
			}

			while(!s.empty()){
				ans.push_back(s.top());
				s.pop();
			}
		}
		counter++;
	}
	return ans;

}