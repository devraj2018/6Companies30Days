//  https://leetcode.com/problems/longest-mountain-in-array/  //
class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        int i=0,n=arr.size();
        
        while(i<n)
        {    int increasing=0,decreasing=0;
             while(i<n-1 && arr[i]==arr[i+1]) i++;
                 
             while(i<n-1 && arr[i]<arr[i+1])
             {     increasing++;
                   i++;
             }
             while(i<n-1 && arr[i]>arr[i+1])
             {    decreasing++;
                  i++;
             }
         
           if(increasing && decreasing ) ans=max(ans,increasing+decreasing+1);

           if(i==n-1) break; 
            
            
        }
        return ans;
        
    }
};