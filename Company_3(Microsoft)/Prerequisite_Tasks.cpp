class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	   vector<int>res;
	   vector<vector<int>>adj(N);
	   vector<int>Indegree(N,0);
	   for(int i=0;i<pre.size();i++)
	     {
	       adj[pre[i].second].push_back(pre[i].first);
	       Indegree[pre[i].first]++;
	     }
	   queue<int>q;
	   for(int i=0;i<N;i++)
	     {
	        if(Indegree[i]==0)  q.push(i);
	     }
	   while(!q.empty())
	      {
	        int curr=q.front();
	        q.pop();
	        res.push_back(curr);
	        
	        for(auto x:adj[curr])
	         {
	             Indegree[x]--;
	             if(Indegree[x]==0)  q.push(x);
	           
	         }
	      }
	   
	    return res.size()==N;
	   
	 }
};