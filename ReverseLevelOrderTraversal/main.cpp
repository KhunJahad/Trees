vector<int> reverseLevelOrder(Node *root)
{
    // code here
    stack <int> s;
    vector <int> ans;
    queue <Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        s.push(temp->data);
        
        if (temp->right!=NULL) q.push(temp->right);
        if (temp->left!=NULL) q.push(temp->left);
    }
    
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    
    return ans;
}