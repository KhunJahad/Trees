int findindex(string str,int start,int end){

	if (start>end) return -1;
	stack <char> s;

	for(int i=start;i<=end;i++){
		if (str[i]=='(') s.push(str[i]);
		else if (str[i]==')'){
			if (s.top()=='('){
				s.pop();
			}
			if (s.empty()) return i;
		}
	}
	return -1;
}


Node* treeFromString(int start,int end,string s){

	if (start>end) return NULL;

	Node *root=newNode(s[start]-'0');
	int index=-1;

	if (start+1<=end && s[start+1]=='(') index=findindex(s,start+1,end);

	if (index!=-1){
		// start is a num and start+ -- ( meaning next search area is start+2
		// and  index is ) so one less than that
		root->left=treeFromString(start+2,index-1,s);
		// index is ) index+1 is num and index+2 is ( so index+2
		// and for every pair we find we have to remove one end ) so end-1
		root->right=treeFromString(index+2,end-1,s); // take an example to understand
	}
	return root;
}