//  https://leetcode.com/problems/decode-ways  //

class Solution {
	public:
	int mod=1e9+7;
	int helper(string str,int curr_I,vector<int>&dp,int n)
	{
	      if(curr_I> n) return 0; 
	     
	      if(curr_I== n) return 1;  // When we form a complete valid message
	     
	      if(str[curr_I]=='0') return 0;       //Invalid string for single character, So in that case that subtree gets terminated
	     
	      if(dp[curr_I]!=-1) return dp[curr_I];
	     
	      int first= helper(str,curr_I+1,dp,n);  // Taking Single character at a time
	     
	      int  second=0;
	      if(curr_I<n-1 && ( (str[curr_I]=='1') || (str[curr_I]=='2' &&str[curr_I+1]<='6' )) )   // Taking Two character at a time
              second=helper(str,curr_I+2,dp,n);	     
	     
	     return dp[curr_I]= (first%mod + second%mod)%mod;
	 	    
	}
		int CountWays(string str){
		    int n=str.length();
		    vector<int>dp(n+1,-1);
		    return helper(str,0,dp,n);
		}

};