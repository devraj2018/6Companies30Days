//  https://leetcode.com/problems/ugly-number-ii/

class Solution {
public:
    int nthUglyNumber(int n) {
         if(n==1) return 1;
	     vector<int> dp(1,1);
	     int i=0,j=0,k=0;
	     while(dp.size()<n)
            {
               dp.push_back(min({dp[i]*2,dp[j]*3,dp[k]*5}));
              
               if(dp.back()== dp[i]*2) i++;
               if(dp.back()== dp[j]*3) j++;
               if(dp.back()== dp[k]*5) k++;
             
           }
            return dp.back();
        }
};