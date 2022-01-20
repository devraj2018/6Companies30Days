class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int up=0,right=matrix[0].size()-1,down=matrix.size()-1,left=0;
        vector<int>res;
        while(up<=down && left<=right)
        {
             for(int j=left;j<=right;j++)
                 res.push_back(matrix[up][j]);
             up++;
            
             if(up>down || left>right) break;
            
             for(int i=up;i<=down;i++)
                 res.push_back(matrix[i][right]);
             right--;
            
            if(up>down || left>right) break;
            
            for(int j=right;j>=left;j--)
                 res.push_back(matrix[down][j]);
             down--;
            
            if(up>down || left>right) break;
            
             for(int i=down;i>=up;i--)
                 res.push_back(matrix[i][left]);
             left++;
            
             
        }
        return res;
        
    }
};