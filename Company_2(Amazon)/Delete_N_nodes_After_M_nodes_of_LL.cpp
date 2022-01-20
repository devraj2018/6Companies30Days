//    https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/ 
class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        if(head==NULL) return;
        
        Node* dummy=new Node(0);
        dummy->next=head;
        Node* prev=dummy;
        while(head){
        
                   for(int i=1;i<=M && head;i++)
                      {
                       head=head->next;
                       prev=prev->next;
                      }
        
                     for(int i=1;i<=N && head;i++)
                      {   Node* temp=head;
                          head=head->next;
                          delete temp;
                      }
                     prev->next=head;
            
                  }
        head=dummy->next;
     }
};