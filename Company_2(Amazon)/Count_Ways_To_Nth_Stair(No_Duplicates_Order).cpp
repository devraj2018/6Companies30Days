class Solution
{
    public:
     int arr[2]={1,2};
    long long helper(int m,vector<long long>&dp,int curr_I=0,int curr_sum=0)
       {   if(curr_sum>m) return 0;
           if(curr_sum== m) return 1;
         
           long long count=0;
           for(int i=curr_I;i<2;i++)
             {   
                 count+= helper(m,dp,i,curr_sum+ arr[i]);
              }
           return  count;
     }
    long long countWays(int m)
    { 
         vector<long long>dp(m+1,-1);
         return helper(m,dp);
       
    }
};
// Method -2 O(1) Solution

//we just need to count how many no. of 2's we can possibly have for the given value of m.

// for e.g if m=5 
//case1 : (zero 2 : 1 1 1 1 1 )
//case2 : (one 2 : 2 1 1 1)
//case3 : (two 2: 2 2 1)
// and since the order doesn't matter , we can simply return how many times we can use 2
     

class Solution
{
    public:
     long long countWays(int m)
       { 
           return (long long)(m/2)+1;
       
      }
};