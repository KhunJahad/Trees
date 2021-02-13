int height(Node *root){
    if (root==NULL) return 0;
    
    
    int lh=0;
    int rh=0;
    
    if (root->left) lh=height(root->left);
    if (root->right) rh=height(root->right);
    
    return 1+max(lh,rh);
}



int diameter(Node* root) {
    // Your code here
    if (root==NULL) return 0;
    int lh=0;
    int rh=0;
    if (root->left) lh=height(root->left);
    if (root->right) rh=height(root->right);
    
    int ls=0;
    int rs=0;
    if (root->left) ls=diameter(root->left);
    if (root->right) rs=diameter(root->right);
    
    int ans=max(ls,rs);
    ans=max(ans,lh+rh+1);
    return ans;
    
}