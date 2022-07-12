class Solution {
public:
//     int helper(int i, int n , vector<int>&nums, int k, vector<int>&dp)
//     {
//         if(i>=n-1 ) {
//             return nums[n-1];
//         }
//         if(dp[i] != INT_MIN) return dp[i];
//         int ans= INT_MIN/2;
//         for(int j = i+1 ; j <= min(n-1,i+k) ; j++)
//         {
//             ans = max(ans, helper(j,n,nums,k,dp) );
//         }
//         ans = nums[i]+ans;
//         return dp[i] = ans;
//     }
    
    int maxResult(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<int>dp(n,INT_MIN);

//         int a = helper(0,n, nums,k,dp);
        
//         return (a==INT_MIN)?-1:a;
    deque<int>q{0};
        
        int n = nums.size();
        for(int i =1 ; i<n ;i++)
        {
            if(q.front() + k < i)
                q.pop_front();
            nums[i] += nums[q.front()];
            while(!q.empty() and nums[q.back()] <= nums[i])
                q.pop_back();
            q.push_back(i);
        }
        return nums[q.back()];
    }
};