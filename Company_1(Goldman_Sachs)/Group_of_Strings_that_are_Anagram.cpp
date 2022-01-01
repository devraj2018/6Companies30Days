class Solution{
    public:
       vector<vector<string> > Anagrams(vector<string>& arr) {
       int n=arr.size();
       vector<vector<string> > res;
    
       vector<pair<string,int>> temp;
    
       for(int i=0;i<n;i++) temp.push_back({arr[i],i});
    
       for(int i=0;i<n;i++) sort(temp[i].first.begin(),temp[i].first.end());
         
       sort(temp.begin(),temp.end());
       unordered_map<string,vector<string>>mp;
       for(int i=0;i<n;i++)
          {
            mp[temp[i].first].push_back(arr[temp[i].second]);
          }
     
        for(auto x:mp) res.push_back(x.second);
        return res; 
     }
};