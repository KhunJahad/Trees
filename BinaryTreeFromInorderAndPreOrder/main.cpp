static int preIndex = 0;
int search(int start,int end,int in[],int val){
    for (int i=start;i<=end;i++){
        if (in[i]==val) return i;
    }
    return -1;
}

Node *build(int in[],int pre[],int start,int end){
    
    if (start>end) return NULL;
    Node *root=new Node(pre[preIndex++]);
    if (start==end) return root;
    
    int index=search(start,end,in,root->data);
    if (index!=-1){
        root->left=build(in,pre,start,index-1);
        root->right=build(in,pre,index+1,end);
    }
    return root;
    
}
Node* buildTree(int in[],int pre[], int n)
{
//add code here.
preIndex=0;
return build(in,pre,0,n-1);
}

