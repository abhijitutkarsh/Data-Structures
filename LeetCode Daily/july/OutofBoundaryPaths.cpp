class Solution {
public:
    int memo = 1000000007;
    int dp[51][51][51];
    int helper(int m, int n, int maxMove, int i, int j)
    {
        if(i<0 or i>=m or j<0 or j>=n) return 1;
        
        if(maxMove <= 0) return 0;
        if(dp[maxMove][i][j] != -1) return dp[maxMove][i][j];
        long res =0 ;
        res += helper(m, n, maxMove-1, i+1, j);
        res += helper(m, n, maxMove-1, i-1, j);
        res += helper(m, n, maxMove-1, i, j+1);
        res += helper(m, n, maxMove-1, i, j-1);
        
        return dp[maxMove][i][j] = res%memo;

    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return helper(m, n, maxMove, startRow, startColumn)%memo;
    }
};