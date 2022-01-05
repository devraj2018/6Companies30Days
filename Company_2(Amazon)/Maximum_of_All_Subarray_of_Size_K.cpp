//   https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1 //
class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
         vector<int>res;
         deque<int>dq;
         int i;
         for(i=0;i<k;i++)
          {
             while(!dq.empty() && arr[dq.back()]<arr[i]) dq.pop_back();
             
             dq.push_back(i);
          }
         res.push_back(arr[dq.front()]);
       
         for(i=k;i<n;i++)
            {
              while(!dq.empty() && dq.front()<=i-k) dq.pop_front();
             
              while(!dq.empty() && arr[dq.back()]<arr[i]) dq.pop_back();
               
             dq.push_back(i);
             res.push_back(arr[dq.front()]);
           }
       return res;
    }
};