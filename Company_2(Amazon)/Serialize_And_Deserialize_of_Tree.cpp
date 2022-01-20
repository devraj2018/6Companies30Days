class Solution
{
    public:
    vector<int>data;
    
    void serHelper(Node* root)
    {
        if(root==NULL)
            {
               data.push_back(-1);
               return;
            }
          data.push_back(root->data);
          serHelper(root->left);
          serHelper(root->right);
        
    }
    vector<int> serialize(Node *root) 
    {
       serHelper(root);
       return data;
    }
    
    //Function to deserialize a list and construct the tree.
    Node* deserHelper(vector<int>&A,int &curr_I)
     { 
        if(curr_I==A.size()) return NULL;
           
        if(A[curr_I]==-1)
         {   curr_I++;
            return NULL;
         }
        Node* root=new Node(A[curr_I]);
        curr_I++;
        root->left=deserHelper(A,curr_I);
        root->right=deserHelper(A,curr_I);
        
        return root;
     }
    Node * deSerialize(vector<int> &A)
     {  int curr_I=0;
        return deserHelper(A,curr_I);
        
     }

};