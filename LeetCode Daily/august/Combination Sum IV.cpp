class Solution {
public:
    int dp[1001];
    int dfs(vector<int>&nums, int target , int sum )
    {
        if(sum> target)
            return 0;
        if(sum == target)
            return 1;
        if(dp[sum]!= -1) return dp[sum];
        int total =0;
         
        for(int i=0; i<nums.size() ; i++)
        {
            total+= dfs(nums,target, sum+nums[i]);
        }
        return dp[sum]=total;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1, sizeof(dp));
        return dfs(nums,target,0);
    }
};