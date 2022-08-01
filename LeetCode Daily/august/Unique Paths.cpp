class Solution {
public:
    int dp[101][101];
    int dfs(int i , int j , int m , int n)
    {
        if(i>=m or j>=n or i<0 or j<0)  
            return 0;
        
        if(i==m-1 and j==n-1)
            return 1;
        if(dp[i][j] != 0) return dp[i][j];
      
        int maxmove = 0;
        maxmove += dfs(i+1,j, m,n);
        maxmove += dfs(i,j+1, m,n);

        return dp[i][j] = maxmove;
    }
    
    int uniquePaths(int m, int n) {
       memset(dp,0,sizeof(dp));
        return dfs(0,0,m,n);
    }
};