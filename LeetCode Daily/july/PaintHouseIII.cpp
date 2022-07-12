class Solution {
public:
    int dp[101][21][101];
    int helper(int iHouse, int lColor, int t,vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target)
    {
        
        if(t > target) return INT_MAX/2;
        
        
        if(iHouse==m)
        {
            if(t==target)
                return 0;
            else
                return INT_MAX/2;
        }
else
    {
    if(dp[iHouse][lColor][t]!=0) return dp[iHouse][lColor][t];
           int ans = INT_MAX/2;
       if(houses[iHouse]==0)
       {
        for(int j=0 ; j<n ; j++)
        {
            ans = min(ans, cost[iHouse][j]+ helper(iHouse+1,j+1, (lColor==j+1)?t:t+1,                    houses, cost, m, n, target));
        }
       }
    else
    {
            ans =min(ans,helper(iHouse+1, houses[iHouse],(lColor==houses[iHouse])?t:t+1,                    houses, cost, m, n, target));
        }
                                                          
        return dp[iHouse][lColor][t]=ans;
    } 
}
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        
        memset(dp,0,sizeof(dp));
        int a= helper(0,0,0,houses, cost, m, n, target);
            return (a==INT_MAX/2)?-1:a;

    }
};