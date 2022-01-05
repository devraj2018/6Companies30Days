class Solution {
  public:
    unordered_map<Node*,Node*>mp;
    Node* start=NULL;
    void makeParent(Node* root,int target,Node* par=NULL)
    {
        if(root==NULL) return;
        
        if(root->data== target)
         {
             start=root;
         }
        mp[root]=par;
        makeParent(root->left,target,root);
        makeParent(root->right,target,root);
        
   }
    int minTime(Node* root, int target) 
    {
         makeParent(root,target);
         unordered_set<Node*> vis;
         queue<Node*>q;
         q.push(start);
         vis.insert(start);
         int ans=0;
          while(!q.empty())
             {   ans++;
                 int size=q.size();
                 for(int i=0;i<size;i++)
                    {
                       Node* curr=q.front();
                       q.pop();
                    
                       if(curr->left && vis.find(curr->left)==vis.end())
                         {
                             vis.insert(curr->left);
                             q.push(curr->left);
                         }
                       if(curr->right && vis.find(curr->right)==vis.end())
                         {
                            vis.insert(curr->right);
                            q.push(curr->right);
                         }
                       if(mp[curr] &&  vis.find(mp[curr])==vis.end())
                         {  vis.insert(mp[curr]);
                            q.push(mp[curr]);
                         
                         }
                    }
            }
         return ans-1;
            
    }
};