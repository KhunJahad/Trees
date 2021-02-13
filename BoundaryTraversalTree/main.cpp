vector <int> printBoundaryRight(Node *root,vector <int> &ans){
    
    if (root==NULL) return ans;
    
    if (root->right){
        printBoundaryRight(root->right,ans);
        ans.push_back(root->data);
    }
    else if (root->left){
        printBoundaryRight(root->left,ans);
        ans.push_back(root->data);
    }
    
    return ans;
}

vector <int>  printLeaves(Node *root,vector <int>&ans){
    
    if (root->NULL) return ans;
    
    printLeaves(root->left,ans);
    if (root->right==NULL && root->left==NULL) ans.push_back(root->data);
    printLeaves(root->right,ans);
    return ans;
}

vector <int> printBoundaryLeft(Node *root,vector <int> &ans){
    
    if (root==NULL) return ans;
    
    if (root->left){
        ans.push_back(root->data);
        printBoundaryLeft(root->left,ans);
    }
    else if (root->right){
        ans.push_back(root->data);
        printBoundaryLeft(root->right,ans);
    }
    return ans;
}

vector <int> printBoundary(Node *root)
{
     //Your code here
     vector <int> ans;
     if (root==NULL) return ans;
     ans=printBoundaryleft(root,ans);
     ans=printLeaves(root,ans);
     ans=printBoundaryRight(root,ans);
     return ans;
}