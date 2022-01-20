class Solution
{
    public:
   
    void connect(Node *root)
     {
           if(root==NULL) return;
            queue<Node*>q;
            q.push(root);
      
            while(!q.empty())
               {
                 int size=q.size();
                 Node* prev=NULL;

                 for(int i=1;i<=size;i++)
                     {
                           Node* curr=q.front();
                           q.pop();
                
                           if(i==1) prev=curr;
                           else
                             {
                                prev->nextRight=curr;
                                prev=curr;
                             }
                           if(i==size)
                              curr->nextRight=NULL;
                  
                          if(curr->left) q.push(curr->left);
                         if(curr->right) q.push(curr->right);
                    }
              }
         }    
      
};