class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>ans;
        
        ans.push_back({1});
        if(numRows == 1) return ans;
        
        ans.push_back({1,1});
        
        for(int i = 2 ; i<numRows ;i++)
        {
            vector<int>res(i+1);
            
            res[0] =1;
            for(int j=1 ; j<i ;j++ )
                res[j] = ans[i-1][j] + ans[i-1][j-1];
            res[i] =1;
            
            ans.push_back(res);
        }
        return ans;
    }
};