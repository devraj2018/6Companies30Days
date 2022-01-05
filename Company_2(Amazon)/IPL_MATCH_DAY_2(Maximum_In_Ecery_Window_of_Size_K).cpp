//   https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/  //
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
       
       vector<int>res;
       deque<int>dq;
       int i;
       for(i=0;i<k;i++)
       {
            while(!dq.empty() && arr[dq.back()]<arr[i])
              dq.pop_back();
             
            dq.push_back(i);
           
       }
       res.push_back(arr[dq.front()]);
       
       for(i=k;i<n;i++)
       {
            while(!dq.empty() && dq.front()<=i-k)
             dq.pop_front();
             
             while(!dq.empty() && arr[dq.back()]<arr[i])
               dq.pop_back();
               
              dq.push_back(i);
            res.push_back(arr[dq.front()]);
       }
       return res;
    }
};