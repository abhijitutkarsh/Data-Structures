class Solution {
public:
       int helper(int i, int n , vector<int>&nums, vector<int>&dp)
    {
        if(i>=n-2   ) {
            return nums[i];
        }
           if(dp[i] != INT_MAX/2) return dp[i];
        // if(dp[i] != INT_MIN) return dp[i];
        int ans= INT_MAX/2;
        for(int j = i+1 ; j <= min(n-1,i+2) ; j++)
        {
            ans = min(ans, helper(j,n,nums,dp) );
        }
        ans = nums[i]+ans;
        return dp[i]=ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n,INT_MAX/2);
        int a = (cost[0]<cost[1])?0:1;
        int value = helper(0,n,cost,dp);
        int value1 = helper(1,n,cost,dp);
        return min(value,value1);
    }
};