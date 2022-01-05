// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/  //
class Solution{
public:
  string encode(string src)
   {     
     int n=src.length();
     string ans="";
    
     int i=0;
     while(i<n)
       {   char curr=src[i];
           int count=0;
           
           while(i<n && curr== src[i])
              {
                count++;
                 i++;
              }
         ans.push_back(curr);
         ans+=to_string(count);
       }
     return ans;
}   
}; 