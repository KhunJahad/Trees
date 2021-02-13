#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int tc;
	cin>>tc;
	while(tc--){
	    int n,e;
	    cin>>n>>e;
	    
	    vector <int> adj1[n];
	    vector <int> adj2[n];
	    
	    for(int i=0;i<e;i++){
	        int a,b;
	        cin>>a>>b;
	        adj1[a].push_back(b);
	    }
	    for(int i=0;i<e;i++){
	        int a,b;
	        cin>>a>>b;
	        adj2[a].push_back(b);
	    }
	    
	    int flag=1;
	    for (int i=0;i<n;i++) reverse(adj2[i].begin(),adj2[i].end());
	    for(int i=0;i<n;i++){
	        if (adj1[i]!=adj2[i]){
	            flag=0;
	            break;
	        }
	    }
	    cout<<flag<<"\n";
	    
	    
	}
	return 0;
}