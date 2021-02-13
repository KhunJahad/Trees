void inorder(Node *root,vector <int> &temp){
    if (root==NULL) return;
    inorder(root->left,temp);
    temp.push_back(root->data);
    inorder(root->right,temp);
}

Node * bToDLL(Node *root)
{
    // your code here
    if (root==NULL) return NULL;
    
    vector <int> temp;
    inorder(root,temp);
    
    //for (int i:temp) cout<<i<<" ";
    //cout<<"\n";
    Node *head=newNode(temp[0]);
    Node*current=head;
    Node *prev=NULL;
    Node *next=NULL;
    for (int i=1;i<temp.size();i++){
        current->right=newNode(temp[i]);
        current->left=prev;
        prev=current;
        current=current->right;
    }
    current->left=prev;
    
    return head;
}